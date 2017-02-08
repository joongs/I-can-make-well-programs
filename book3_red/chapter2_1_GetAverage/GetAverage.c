//GetAverage.c
/*
파일   명칭 : GetAverage.c
함수   명칭 : main
기      능 : 1000개의 숫자를 입력받아서 평균을 구하고 마지막으로 평균을 출력한다.
입      력 : 숫자
출      력 : 평균
작  성  자 : Joey
작성  일자 : 2017/02/08
*/
//외부 함수 포함 기능
#include <stdio.h>

//매크로들
#define MAX 5

//사용자 정의 자료형 선언
typedef unsigned long int ULong;
typedef unsigned short int UShort;

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언들
	auto float average = 0.0;
	auto UShort input;
	//auto int input;
	auto ULong sum = 0;
	auto UShort i;

	//1. MAX번 동안 반복한다.
	for (i = 1; i <= MAX; i++) {
		//1.1. 숫자를 입력받는다.
		scanf("%hd", &input);	//short를 입력 받을 때는 서식문자에 h를 추가해야 한다.

		//1.2. 합을 구한다.
		sum += (ULong)input;

		//1.3. 숫자, 합을 출력한다.
		printf("%d %d\n", input, sum);
	}
	
	//2. 평균을 구한다.
	average = sum / (MAX * 1.0F);

	//3. 평균을 출력한다.
	printf("평균 : %.1f\n", average);

	//4. 끝내다.
	return 0;
}

//입력
10
20
30
40
50

//출력
10 10
20 30
30 60
40 100
50 150
평균 : 30.0
