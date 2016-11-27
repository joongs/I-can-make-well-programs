//CountMultiples.c
/*
파일명칭 : CountMultiples.c
기    능 : 1부터 100000까지 수들에서 개수를 세고, 7의 배수를 구하고, 개수와 7의 배수를 출력한다.
           그리고 마지막으로 전체 개수를 출력한다.
입    력 : 없음
출    력 : 개수
작 성 자 : Joey
작성일자 : 2016/11/17
*/

//전처리기
#include <stdio.h>
#define MAXIMUM 100000
#define MULTIPLE 7

//함수선언
int main(int argc, char* argv[]);

//함수정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	int count = 0;
	int number = 0;

	//1. 제목을 출력한다.
	printf("개수\t\t\t7의 배수\n");

	//2. 수가 MAXIMUM보다 클때까지 반복한다.
	do {
		// 2.2. 7의 배수를 구한다.
		number += MULTIPLE;
		// 2.1. 개수를 세다.
		count++;
		// 2.3. 개수와 7의 배수를 출력한다.
		printf("%d\t\t\t%d\n", count, number);
	} while (number <= MAXIMUM);
	count--;

	//3. 개수를 출력한다.
	printf("7의 배수 개수 %d\n", count);

	//4. 끝내다.
	return 0;
}