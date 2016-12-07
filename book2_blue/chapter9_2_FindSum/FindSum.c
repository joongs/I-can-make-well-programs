//FindSum.c
/*
파일  명칭 : FindSum.c
함수  명칭 : main
기      능 : 1부터 100까지 수들에서, 수를 세고, 수가 홀수인지 짝수인지 판단하여 합을 구하고, 
            그때 수, 홀수의 합, 짝수의 합을 출력한다. 마지막으로 홀수의 합, 짝수의 합을 출력한다.
작  성  자 : Joey
작성  일자 : 2016/12/07
*/
//외부함수 포함
#include <stdio.h>

//매크로들
#define MAX 100
#define DIVISOR 2

//main 함수 선언
int main(int argc, char* argv[]);

//main 함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언및 정의
	auto unsigned short int oddSum = 0;
	auto unsigned short int evenSum = 0;
	auto unsigned short int remainder;
	auto unsigned short int number;

	//1. 제목을 출력한다.
	printf("수\t\t홀수의 합\t짝수의 합\n");
	//2. 수가 MAX보다 작거나 같은동안 반복한다.
	for (number = 1; number <= MAX; number++) {		
		//2.2. 수가 홀수인지 짝수인지 확인한다.
		remainder = number % DIVISOR;
		if (remainder != 0) {
			//2.2.1. 홀수이면 합을 구한다.
			oddSum += number;
		}
		else {
			//2.2.2. 짝수이면 합을 구한다.
			evenSum += number;
		}

		//2.3. 수, 홀수의 합, 짝수의 합을 출력한다.
		printf("%d\t\t%d\t%d\n", number, oddSum, evenSum);

		//2.1. 수를 센다.
	}
	//3. 홀수의 합, 짝수의 합을 출력한다.
	printf("홀수의 합 : %d\t짝수의 합 : %d\n", oddSum, evenSum);
	//4. 끝내다.

	return 0;
}
