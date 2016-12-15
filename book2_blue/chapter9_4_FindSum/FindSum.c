//FindSum.c
/*
파일 명칭 : FindSum.c
함수 명칭 : main
기     능 : 1부터 1000까지 수들에서, 수를세고, 더할 수를 구해서 합을 구한다.
	 	  그때 수, 더할 수, 합을 출력한다. 마지막으로 합을 출력한다.
작 성 자 : Joey
작성 일자 : 2016/12/15
*/

//외부함수포함기능
#include <stdio.h>

//매크로들
#define MAX 1000
#define MULTIPLE 2

//사용자 정의 자료형 선언
typedef unsigned short int UShort;

//함수선언
int main(int argc, char* argv[]);

//함수정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	auto UShort sum = 0;
	auto UShort number;
	auto UShort numberToAdd;
	auto UShort remainder;

	//1. 제목을 출력한다.
	prinf("수\t\t더할 수\t\t합\n");

	//2. 수가 MAX보다 작거나 같은 동안 반복한다.
	for (number = 1; number <= MAX; number++) {
		//2.2. 더할 수를 구한다.
		remainder = number % MULTIPLE;
		if (remainder != 0) {
			numberToAdd = number;
		}
		else {
			numberToAdd = number * (-1);
		}
		//2.3. 합을 구한다.
		sum += numberToAdd;

		//2.4. 수, 더할 수, 합을 출력한다.
		printf("%d\t\t%d\t\t%d\n", number, numberToAdd, sum);

		//2.1. 수를 세다.
	}
	//3. 합을 출력한다.
	printf("합 : %d\n", sum);

	//4. 끝내다.
	return 0;
}
