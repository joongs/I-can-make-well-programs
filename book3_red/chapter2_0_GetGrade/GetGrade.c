//GetGrade.c
/*
 * 파일 명칭 : GetGrade.c
 * 함수 명칭 : Main
 * 기    능 : 10회에 한 해 평균을 입력받아 평균에 해당하는 평점을 구하고 출력한다.
 * 입    력 : 평균
 * 출    력 : 평점
 * 작 성 자 : Joey
 * 작성 일자 : 2017/02/03
 */
//외부함수 포함 기
#include <stdio.h>

//매크로들
#define MAX 10
#define GRADE_A 90.0F
#define GRADE_B 80.0F
#define GRADE_C 70.0F
#define GRADE_D 60.0F

//사용자 정의 자료형 선언
typedef unsigned short int UShort;

//함수 선언
int main(int argc, char* argvp[]);

//함수 정의
int main(int argc, char* argv[]) {
	//자동변수 선언들
	auto char grade;
	auto float average;
	auto UShort number = 0;
	auto UShort i;

	//1. 제목을 출력한다.
	printf("번호\t평균\t평점\n");

	//2. MAX번 반복한다.
	for(i = 0; i <= MAX; i++) {
		//2.1. 번호를 세다.
		number++;

		//2.2. 평균을 입력받는다.
		scanf("%f", &average);

		//2.3. 평균에 대해 평점을 매긴다.
		if(average >= GRADE_A) {
			grade = 'A';
		} else if (average >= GRADE_B) {
			grade = 'B';
		} else if (average >= GRADE_C) {
			grade = 'C';
		} else if (average >= GRADE_D) {
			grade = 'D';
		}
		else {
			grade = 'F';
		}

		//2.4. 번호, 평균, 평점을 출력한다.
		printf("%d\t%.1f\t%c\n", number, average, grade);
	}

	//3. 끝내다.
	return 0;
}


//result
번호	평균	평점
100.0
1	100.0	A
90.0
2	90.0	A
80.0
3	80.0	B
70.0
4	70.0	C
60.0
5	60.0	D
50.0
6	50.0	F
89.9
7	89.9	B
79.9
8	79.9	C
69.9
9	69.9	D
59.9
10	59.9	F
