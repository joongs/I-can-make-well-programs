//FindSum.c
/*
파일  명칭 : FindSum.c
함수  명칭 : main
기      능 : 1부터 100까지 수들에서, 수를 세고 수까지 합을 구하고 총합을 구하며 그때 수, 합, 총합을 출력한다.
           마지막으로 총합을 출력한다.
작  성  자 : Joey
작성  일자 : 2016/12/11
수정  일자 : 2016/12/12 number가 미지수이기 때문에 안쪽의 반복구조는 for가 아닌 while구조로 변경해야 한다.
*/
//외부함수 가져오기
#include <stdio.h>

//매크로들
#define MAX 100

//함수 선언
int main(int argc, char* argv[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	auto unsigned long int sum = 0;
	auto unsigned short int number;
	auto unsigned short int sumToNumber;
	auto unsigned short int temp;

	//1. 제목을 출력한다.
	printf("수\t\t수까지의 합\t\t총합\n");

	//2. 수가 MAX보다 작거나 같은동안 반복한다.
	for (number = 1; number <= MAX; number++) {		
		//2.2. 수까지 합을 구한다.
		sumToNumber = 0;
		temp = 1;
		while (temp <= number) {
			sumToNumber += temp;
			temp++;
		}
		//2.3. 총합을 구한다.
		sum += (unsigned long int)sumToNumber;

		//2.4. 수, 수까지 합, 총합을 출력한다.
		printf("%d\t\t%d\t\t%d\n", number, sumToNumber, sum);

		//2.1. 수를 세다.
	}

	//3. 총합을 출력한다.
	printf("총합 : %d\n", sum);

	//4. 끝내다.
	return 0;
}
