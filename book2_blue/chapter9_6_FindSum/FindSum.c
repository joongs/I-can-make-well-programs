//FindSum.c
/*
파일명칭 : FindSum.c
함수명칭 : main
기   능 : 1에서 100까지 수들에서, 수를 세고, 더할수를 구하고 합을 구한다.
         이때 수, 더할 수, 합을 출력한다. 마지막으로 합을 출력한다.
작 성 자 : Joey
작성일자 : 2016/12/18
*/
//외부함수 포함기능
#include <stdio.h>

//매크로들
#define MAX 100
#define FRACTION 1.0
#define MULTIPLE 2

//사용자 정의 자료형 선언
typedef double Double;
typedef unsigned short UShort;

//함수선언
int main(int argc, char* argv[]);

//함수정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	auto Double sum = 0.0;
	auto UShort number;
	auto Double numberToAdd;
	auto UShort remainder;

	//1. 제목을 출력한다.
	printf("수\t\t더할 수\t\t합\n");
	
	//2. 수가 MAX보다 작거나 같은동안 반복한다.
	for (number = 1; number <= MAX; number++) {
		//2.2. 더할 수를 구한다.
		remainder = number % MULTIPLE;
		if (remainder != 0) {
			numberToAdd = FRACTION / (Double)number;
		}
		else {
			numberToAdd = (FRACTION / (Double)number) * ((Double)-1);
		}

		//2.3. 합을 구한다.
		sum += numberToAdd;

		//2.4. 수, 더할 수, 합을 출력한다.
		printf("%d\t\t%f\t\t%f\n", number, numberToAdd, sum);

		//2.1. 수를세다.
	}
	//3. 합을 출력한다.
	printf("합 : %f\n", sum);

	//4. 끝내다.
	return 0;
}
