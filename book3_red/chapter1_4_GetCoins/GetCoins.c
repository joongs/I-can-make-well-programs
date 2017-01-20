//GetCoins.c
/*
파일 명칭 : GetCoins.c
함수 명칭 : main
기     능 : 10원, 100원, 500원 각각 최대 10개를 사용해서 금액을 만들 때 각각의 개수를 출력하시오.
입     력 : 없음
출     력 : 10원 개수, 100원 개수, 500원 개수
작 성 자 : Joey
작성 일자 : 2017/01/20
*/

//외부 기능 포함
#include <stdio.h>

//매크로들
#define MAX 10
#define TEN 10
#define HUNDRED 100
#define FIVEHUNDRED 500

//사용자 정의 자료형
typedef unsigned short int UShort;

//메인 함수 선언
int main(int argc, char* argv[]);

//메인 함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언들
	auto UShort numberTen = 0;
	auto UShort numberHundred = 0;
	auto UShort numberFiveHundred = 0;
	auto UShort balance = 3800;

	//1. 잔액이 0보다 클때까지 반복한다.
	while (balance > 0) {
		//1.1. 잔액이 10원보다 크거나 같으면, 10원 개수를 세다.
		if (balance >= TEN && numberTen < MAX) {
			numberTen++;
			balance -= TEN;
		}
		//1.2. 잔액이 100원보다 크거나 같으면, 100원 개수를 세다.
		if (balance >= HUNDRED && numberHundred < MAX) {
			numberHundred++;
			balance -= HUNDRED;
		}
		//1.3. 잔액이 500원보다 크거나 같으면, 500원 개수를 세다.
		if (balance >= FIVEHUNDRED && numberFiveHundred < MAX) {
			numberFiveHundred++;
			balance -= FIVEHUNDRED;
		}
		//1.4. 10원 개수, 100원 개수, 500원 개수 잔액을 출력한다.
		printf("%d %d %d %d\n", numberTen, numberHundred, numberFiveHundred, balance);
	}
	//2. 10원 개수, 100원 개수, 500원 개수를 출력한다.
	printf("%d %d %d\n", numberTen, numberHundred, numberFiveHundred);

	//3. 끝내다.
	return 0;
}
