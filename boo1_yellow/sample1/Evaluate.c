//Evaluate.c
/***************************************************************
파일명 : Evaluate.c
기능 : 입력하는 만큼 성명, 국어점수, 영어점수를 입력받고, 총점과 평균을 구하고 평균을 기준으로 평가하고 학생성적을 출력한다.
함수명칭 : main
출력 : 통과여부
입력 : 성명, 국어점수, 영어점수
작성자 : Joey
작성일자 : 2016/11/12
***************************************************************/

//전처리기
#include <stdio.h>
#define SUBJECTCOUNT 2.0
#define PASSINGAVERAGE 70.0

//함수선언
int main(int argc, char* argv[]);

//함수정의
int main(int argc, char* argv[]) {
	//자동변수 선언 및 정의
	char (*isPassed);
	char name[11];
	int koreanScore;
	int englishScore;
	int sum;
	float average;
	int number = 0;

	// 1.1. 성명, 국어점수, 영어점수를 입력받는다
	scanf("%s %d %d", name, &koreanScore, &englishScore);
	//1. 파일의 끝이 아닌동안 반복한다
	while (!feof(stdin)) {		
		// 1.2. 번호를 매기다
		number++;
		// 1.3. 총점을 구한다
		sum = koreanScore + englishScore;
		// 1.4. 평균을 구한다
		average = sum / SUBJECTCOUNT;
		// 1.5. 평가를 한다
		if (average >= PASSINGAVERAGE) {
			isPassed = "PASS";
		}
		else {
			isPassed = "FAIL";
		}
		// 1.6. 번호, 성명, 국어점수, 영어점수, 총점, 평균, 평가를 출력한다
		printf("%d %s %d %d %d %.1f %s\n", number, name, koreanScore, englishScore, sum, average, isPassed);
		// 1.1. 성명, 국어점수, 영어점수를 입력받는다
		scanf("%s %d %d", name, &koreanScore, &englishScore);		
	}
	//2. 끝내다
	return 0;
}
