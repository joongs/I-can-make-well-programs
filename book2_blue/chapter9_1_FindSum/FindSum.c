//FindSum.c
/*
파일  명칭 : FindSum.c
함수  명칭 : main
기     능 : 1부터 99까지 수들에서, 수를 세고 홀수인지 확인하여, 홀수이면 합을 구한다. 이 때 수와 합을 출력한다.
            마지막으로 홀수의 합을 출력한다.
작  성  자 : Joey
작성  일자 : 2016/12/06
*/
//외부함수 포함
#include <stdio.h>

//매크로들
#define MAX 99
#define MULTIPLE 2

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	auto unsigned short int sum = 0;
	auto unsigned short int remainder;
	auto unsigned short int number;

	//1. 제목을 출력한다.
	printf("수\t\t\t홀수의 합\n");
	//2. 수가 MAX보다 작거나 같은 동안 반복한다.
	for (number = 1; number <= MAX; number++) {		
		//2.2. 수가 홀수인지 확인한다.
		remainder = number % MULTIPLE;
		if (remainder != 0) {
			//2.2.1. 합을 구한다.
			sum += number;
			//2.2.2. 수, 홀수의 합을 출력한다.
			printf("%d\t\t\t%d\n", number, sum);
		}
		//2.1. 수를 센다.
	}

	//3. 홀수의 합을 출력한다.
	printf("홀수의 합 : %d\n", sum);

	//4. 끝내다.
	return 0;
}
