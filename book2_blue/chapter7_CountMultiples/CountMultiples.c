//CountMultiples.c
/*
파일  명칭 : CountMultiples.c
함수  명칭 : main
기      능 : 1부터 100000까지 수들에서 수를 세고, 수가 7의 배수인지 확인하여,
            7의 배수이면 개수를 세고, 그 때 개수와 7의 배수를 출력한다.
			그리고 마지막으로 전체 개수를 출력한다.
입      력 : 없음
출      력 : 개수
작  성  자 : joey
작성  일자 : 2016/12/03
*/
//외부파일 포함 기능
#include <stdio.h>

// 매크로들
#define MAX 100000L
#define MULTIPLE 7

// 함수 선언
int main(int argc, char* argv[]);

// 함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	auto unsigned long int count = 0;
	auto unsigned long int number;
	auto unsigned short int remainder;
	
	//1. 제목을 출력한다.
	printf("개수\t\t\t7의 배수\n");
	//2. 수가 MAX보다 작거나 같은동안 반복한다.
	for (number = 1; number <= MAX; number++) {		
		//2.2. 수가 7의 배수인지 확인한다.
		remainder = (unsigned short int)(number % MULTIPLE);
		if (remainder == 0) {
			//2.2.1. 개수를 센다.
			count++;
			//2.2.2. 개수와 7의 배수를 출력한다.
			printf("%d\t\t\t%d\n", count, number);
		}
		//2.1. 수를 센다.
	}
	//3. 개수를 출력한다.
	printf("7의 배수 개수 : %d\n", count);
	//4. 끝내다.
	return 0;
}
