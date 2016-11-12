//Calculate.c
/**********************************************************
파일명 : Calculate.c
기능 : 1부터 100까지 숫자를 세고, 합을 계산하고, 합을 출력한다.
함수명칭 : main
출력 : 합
입력 : 없음
작성자 : 김세중
작성일자 : 2016/11/12
***********************************************************/
//전처리기
#include <stdio.h>
#define MAXIMUM 100
#define MINIMUM 1

//함수선언
int main(int argc, char* argv[]);

//함수정의
int main(int argc, char* argv[]) {
	// 자동변수 선언 및 정의
	int sum = 0;
	int number = MINIMUM;

	//1. 100보다 작거나 같은 동안 반복한다
	while (number <= MAXIMUM) {
		// 1.1. 합을 구한다
		//sum = sum + number;
		sum += number;
		// 1.2. 숫자를 센다
		//number = number + 1;
		number++;
	}
	//2. 합을 출력한다
	printf("%d\n", sum);

	//3. 끝내다
	return 0;
}