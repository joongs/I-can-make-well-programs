//GetLastValues.c
/*
 * 파일 명칭 : GetLastValues.c
 * 함수 명칭 : main
 * 기    능 : 1부터 시작하여 공차가 2인 등차수열의 합이 1000을 넘은 후
 *           항의 위치, 항의 값 그리고 합을 출력한다.
 * 입    력 : 없음
 * 출    력 : 항의 위치, 항의 값, 합
 * 작 성 자 : Joey
 * 작성 일자 : 2017/01/05
 */
//외부함수 포함 기능
#include <stdio.h>

//매크로들
#define MAX 1000
#define DELTA 2

//사용자정의자료형 선언
typedef unsigned short int UShort;

//메인함수 선언
int main(int argc, char* argv[]);

//메인함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언들
	auto UShort position = 1;
	auto UShort term = 1;
	auto UShort sum = 1;

	//1. 합이 MAX보다 작거나 같은 동안 반복한다.
	while (sum <= MAX) {
		//1.4. 항의 위치, 항의 값, 합을 출력한다.
		printf("%d %d %d\n", position, term, sum);
		//1.1. 몇 번째인지 세다.
		position++;
		//1.2. 항의 값을 구한다.
		term += DELTA;
		//1.3. 합을 구한다.
		sum += term;
	}
	//2. 항의 위치, 항의 값, 합을 출력한다.
	printf("%d %d %d\n", position, term, sum);
	//3. 끝내다.
	return 0;
}
