//FindSum.c
/*
파일 명칭 : FindSum.c
함수 명칭 : main
기     능 : 1부터 100까지 수들에서, 수를세고, 3의 배수와 5의 배수가 아닌지 확인하고, 합을 구한다.
           마지막으로 합을 출력한다.
작 성 자 : Joey
작성 일자 : 2016/12/15
*/

//외부함수포함기능
#include <stdio.h>

//매크로들
#define MAX 100
#define MULTIPLETHREE 3
#define MULTIPLEFIVE 5

//사용자 정의 자료형 선언
typedef unsigned short int UShort;

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	auto UShort sum = 0;
	auto UShort number;
	auto UShort remainderThree;
	auto UShort remainderFive;

	//1. 제목을 출력한다.
	printf("수\t\t합\n");

	//2. 수가 MAX보다 작거나 같은동안 반복한다.
	for (number = 1; number <= MAX; number++) {
		//2.2. 3의 배수와 5의 배수가 아닌지 확인한다.
		remainderThree = number % MULTIPLETHREE;
		remainderFive = number % MULTIPLEFIVE;

		//2.3. 참이면, 합을 구한다.
		if (remainderThree != 0 && remainderFive != 0) {
			sum += number;
			//2.4. 참이면, 수, 합을 출력한다.
			printf("%d\t\t%d\n", number, sum);
		}

		//2.4. 수를 세다.
	}
	//3. 합을 출력한다.
	printf("합 : %d\n", sum);

	//4. 끝내다.
	return 0;
}
