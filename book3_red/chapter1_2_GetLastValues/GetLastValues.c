//GetLastValues.c
/*
 * 파일 명칭 : GetLastValues.c
 * 함수 명칭 : main
 * 기    능 : 1000만원부터 시작해서 2배가 넘은 후, 기간, 이자, 잔액을 출력한다.
 * 입    력 : 없음
 * 출    력 : 기간, 이자, 잔액
 * 작 성 자 : Joey
 * 작성 일자 : 2017/01/08
 */

//외부함수 포함 기능
#include <stdio.h>

//매크로들
#define ANUALINTEREST 7.0F
#define MULTIPLES 2
#define PRINCIPAL 10000000

//사용자 정의 자료형 선언
typedef unsigned short int UShort;
typedef unsigned long int ULong;

//메인 함수 선언
int main(int argc, char* argv[]);

//메인 함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언들
	auto UShort year = 0;
	auto ULong interests = 0;
	auto ULong bankBalance = PRINCIPAL;

	//1. 잔액이 원금의 두배 보다 작거나 같은 동안 반복한다.
	while(bankBalance <= PRINCIPAL * MULTIPLES) {
		//1.4. 기간, 이자, 잔액을 출력한다.
		printf("%d %ld %ld\n", year, interests, bankBalance);
		//1.1. 기간을 세다.
		year++;
		//1.2. 이자를 구하다.
		interests = (((bankBalance * (ULong)(ANUALINTEREST * 10)) / 10) / 100);
		//1.3. 잔액을 구한다.
		bankBalance += interests;
	}

	//2. 기간, 이자, 잔액을 출력한다.
	printf("%d %ld %ld\n", year, interests, bankBalance);

	//3. 끝내다.
	return 0;
}
