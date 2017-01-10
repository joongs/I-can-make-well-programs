//GetAnimals.c
/*
파일 명칭 : GetAnimals.c
함수 명칭 : main
기    능 : 송아지와 닭의 머리수와 다리수에 따라 송아지와 닭의 수를 계산한다.
입    력 : 없음
출    력 : 송아지수, 닭의 수
작 성 자 : Joey
작성일자 : 2017/01/10
*/

//외부 기능 포함 기능
#include <stdio.h>

//매크로들
#define LEGSCALF 4
#define LEGSCHICKEN 2

//사용자 정의 자료형 선언
typedef unsigned short int UShort;

//메인 함수 선언
int main(int argc, char* argv[]);

//메인 함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언들
	auto UShort numberCalf = 0;
	auto UShort numberChicken = 0;
	auto UShort numberHeadRemained = 46;
	auto UShort numberRegRemained = 140;

	//1. 남은 마리수의 2배가 남은 다리수 보다 작은 동안 반복한다.
	while ( (numberHeadRemained * LEGSCHICKEN) < numberRegRemained) {
		//1.4. 송아지의 수, 닭 수, 남은 머리수, 남은 다리수를 출력한다.
		printf("%d %d %d %d\n", numberCalf, numberChicken, numberHeadRemained, numberRegRemained);

		//1.1. 송아지수를 세다.
		numberCalf++;
		//1.2. 남은 머리수를 세다.
		numberHeadRemained--;
		//1.3. 남은 다리수를 세다.
		numberRegRemained -= LEGSCALF;
	}

	//2. 송아지수, 닭 수, 남은 머리수, 남은 다리수를 출력한다.
	printf("%d %d %d %d\n", numberCalf, numberChicken, numberHeadRemained, numberRegRemained);

	//3. 닭 수를 구한다.
	numberChicken = numberHeadRemained;

	//4. 송아지 수, 닭 수를 출력한다.
	printf("송아지 수 : %d, 닭 수 : %d\n", numberCalf, numberChicken);

	//5. 끝내다.
	return 0;
}

//result
0 0 46 140
1 0 45 136
2 0 44 132
3 0 43 128
4 0 42 124
5 0 41 120
6 0 40 116
7 0 39 112
8 0 38 108
9 0 37 104
10 0 36 100
11 0 35 96
12 0 34 92
13 0 33 88
14 0 32 84
15 0 31 80
16 0 30 76
17 0 29 72
18 0 28 68
19 0 27 64
20 0 26 60
21 0 25 56
22 0 24 52
23 0 23 48
24 0 22 44
송아지 수 : 24, 닭 수 : 22
