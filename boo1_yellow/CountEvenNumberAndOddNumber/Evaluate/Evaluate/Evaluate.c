//Evaluate.c
/**************************************************************
파일명 : Evaluate.c
기능 : 입력하는 만큼 수들을 입력받고, 나머지를 구하고 나머지를 기준으로 평가하고, 짝수의 개수와 홀수의 개수를 세고, 짝수의 개수와 홀수의 개수를 출력한다.
함수명칭 : main
출력 : 짝수의 개수, 홀수의 개수
입력 : 수들
작성자 : 김세중
작성일자 : 2016/11/12
**************************************************************/
//전처리기
#include <stdio.h>
#define DIVISOR 2
#define EVENREMAINDER 0

//함수의 선언
int main(int argc, char* argv[]);

//함수의 정의
int main(int argc, char* argv[]){
	//자동변수 선언 및 정의
	int evenCount = 0;
	int oddCount = 0;
	int number;
	int remainder;

	// 1.1. 수를 입력받는다.
	scanf("%d", &number);
	//1. 파일의 끝이 아닌동안 반복한다.
	while (!feof(stdin)) {		
		// 1.2. 나머지를 구한다.
		remainder = number;
		while (remainder >= DIVISOR) {
			remainder -= DIVISOR;
		}
		// 1.3. 평가를 한다.
		if (remainder == EVENREMAINDER) {
			//  1.3.1. 참이면, 짝수의 개수를 센다.
			evenCount++;
		}
		else {
			//  1.3.2. 거짓이면, 홀수의 개수를 센다.
			oddCount++;
		}		
		// 1.1. 수를 입력받는다.
		scanf("%d", &number);
	}
	//2. 짝수의 개수, 홀수의 개수를 출력한다.
	printf("%d %d\n", evenCount, oddCount);
	//3. 끝내다
	return 0;
}