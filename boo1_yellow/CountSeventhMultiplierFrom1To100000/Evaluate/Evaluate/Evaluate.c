//Evaluate.c
/**************************************************************
파일명 : Evaluate.c
기능 : 1부터 100,000까지 숫자를 세고, 나머지를 계산하고, 나머지를 기준으로 평가하고, 
      배수의 개수를 세고, 배수의 개수를 출력한다.
함수명칭 : main
출력 : 배수의 개수
입력 : 없음
작성자 : Joey
작성일자 : 2016/11/12
**************************************************************/
// 전처리기
#include <stdio.h>
#define MAXIMUM 100000
#define MINIMUM 1
#define DIVISOR 7
#define CONDITION 0

// 함수선언
int main(int argc, char* argv[]);

// 함수정의
int main(int argc, char* argv[]) {
	//자동 변수 선언 및 정의
	int mutiplieCount = 0;
	int remainder;
	int number = MINIMUM;

	//1. 100000보다 작거나 같은 동안 반복한다
	while (number <= MAXIMUM) {
		// 1.1. 나머지를 구한다
		remainder = number;
		while (remainder >= DIVISOR) {
			remainder -= DIVISOR;
		}
		// 1.2. 배수인지 판단한다
		if (remainder == CONDITION) {
			//  1.2.1. 참인경우, 배수의 개수를 센다
			mutiplieCount++;
		}
		// 1.3. 숫자를 센다.
		number++;
	}
	//2. 배수의 개수를 출력한다
	printf("%d\n", mutiplieCount);

	//3. 끝내다
	return 0;
}

//////////////////////////////////////////////////////////////////////////

//Evaluate.c
/**************************************************************
파일명 : Evaluate.c
기능 : 1부터 100,000까지 7의 배수이면 7의 배수의 개수를 세고, 배수의 개수를 출력한다.
함수명칭 : main
출력 : 배수의 개수
입력 : 없음
작성자 : 김세중
작성일자 : 2016/11/15
원장님 피드백 :  
1. for문으로 변경
2. 나머지 연산자(%)를 사용하자.
**************************************************************/
// 전처리기
#include <stdio.h>
#define MAXIMUM 100000
#define MINIMUM 1
#define DIVISOR 7
#define CONDITION 0
#define INCREMENT 1

// 함수선언
int main(int argc, char* argv[]);

// 함수정의
int main(int argc, char* argv[]) {
	//자동 변수 선언 및 정의
	int mutiplieCount = 0;
	int remainder;
	int number;

	//1. 100000보다 작거나 같은 동안 반복한다
	for (number = MINIMUM; number <= MAXIMUM; number = number + INCREMENT){
		// 1.1. 7의 배수이면, 7이 배수의 개수를 세다
		remainder = number;
		remainder %= DIVISOR;
		if (remainder == CONDITION) {
			mutiplieCount++;
		}
	}
	//2. 배수의 개수를 출력한다
	printf("%d\n", mutiplieCount);

	//3. 끝내다
	return 0;
}
