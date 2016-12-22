//FindNumber.c
/*
파일 명칭 : FindNumber.c
함수 명칭 : main
기     능 : 1부터 50까지 수들에서, 순서를 세고, 두항을 구하고, 피보나치 수를 구하며 그때 순서와 피보나치 수를 출력한다.
           마지막으로 피보나치 수를 출력한다.
작 성 자 : Joey
작성 일자 : 2016/12/22
*/

//외부 기능 포함
#include <stdio.h>

//매크로들
#define MAX 50

//사용자 정의 자료형 선언
typedef unsigned long long int ULLong;
typedef unsigned short int UShort;

//메인 함수 선언
int main(int argc, char* argv[]);

//메인 함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	auto ULLong fibonacciNumber = 0;
	auto ULLong fibonacciOne;
	auto ULLong fibonacciTwo = 1;
	auto UShort count;
	
	//1. 제목을 출력한다.
	printf("순서\t\t피보나치수\n");

	//2.수가 MAX보다 작거나 같은 동안 반복한다.
	for (count = 1; count <= MAX; count++) {
		//2.2. 두항을 구한다.
		fibonacciOne = fibonacciTwo;
		fibonacciTwo = fibonacciNumber;

		//2.3. 피보나치수를 구한다.
		fibonacciNumber = fibonacciOne + fibonacciTwo;

		//2.4. 순서와 피보나치 수를 출력한다.
		printf("%d\t\t%lld\n", count, fibonacciNumber);

		//2.1. 순서를 세다.
	}
	//3. 피보나치 수를 출력한다.
	printf("50번째 항 : %lld\n", fibonacciNumber);

	//4. 끝내기
	return 0;
}
