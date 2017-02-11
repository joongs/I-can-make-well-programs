//GetNumbers.c
/*
파일 명칭 : GetNumbers.c
함수 명칭 : main
기    능 : 100개 숫자를 입력될 때, 양수, 음수 개수를 세고, 양수면, 홀수 짝수 개수를 세다.
          그떄 숫자, 양수개수, 음수개수, 홀수개수, 짝수개수를 출력한다.
입    력 : 숫자들
출    력 : 양수개수, 음수개수, 홀수개수, 짝수개수
작 성 자 : Joey
작성 일자 :  2017/02/11
*/

//외부기능 포함
#include <stdio.h>

//매크로들
#define MAX 5
#define DIVISOR 2
#define ZERO 0

//사용자 정의 자료형
typedef unsigned short int UShort;
typedef unsigned long int ULong;
typedef signed long int SLong;

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언들
	auto UShort positiveNumber = 0;
	auto UShort negativeNumber = 0;
	auto UShort oddNumber = 0;
	auto UShort evenNumber = 0;
	auto SLong number;
	auto ULong remainder;
	auto UShort i;

	//1. MAX번동안 반복한다.
	for (i = 1; i <= MAX; i++) {
		//1.1. 숫자를 입력받는다.
		scanf("%ld", &number);

		//1.2. 숫자가 양수, 음수인지 판단해서 개수를 세다.
		if (number > ZERO) {
			positiveNumber++;
			//1.2.1. 양수면, 홀수, 짝수인지 판단해서 개수를 세다.
			remainder = number % (ULong)DIVISOR;
			if (remainder == 0) {
				evenNumber++;
			}
			else {
				oddNumber++;
			}
		}
		else if (number < ZERO) {
			negativeNumber++;
		}
		//1.3. 숫자, 양수개수, 음수개수, 홀수개수, 짝수개수를 출력한다.
		printf("%ld %d %d %d %d\n", number, positiveNumber, negativeNumber, oddNumber, evenNumber);
	}
	//2. 끝내다.
	return 0;
}

//input
5
10
-5
-10
0
//output
5 1 0 1 0
10 2 0 1 1
-5 2 1 1 1
-10 2 2 1 1
0 2 2 1 1

