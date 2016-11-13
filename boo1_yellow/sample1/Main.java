//Main.java
/*****************************************************************
 * 파일명칭 : Main.java
 * 기능 : 입력하는 만큼 성명과 국어와 영어점수를 입력받고, 총점과 평균을 계산하고, 
 * 		  평균을 기준으로 평가하고, 학새성적을 출력한다.
 * 메소스 : main
 * 출력 : 평가
 * 입력 : 성명, 국어점수, 영어점수
 * 작성자 : 김세중
 * 작성일자 : 2016/11/13
 ****************************************************************/
import java.util.Scanner;

public class Main {
	public static void main(String[] argc) {
		final float SUBJECTCOUNT = 2.0F;
		final float PASSINGAVERAGE = 70.0F;
		String isPassed;
		String name;
		int koreanScore;
		int englishScore;
		int sum;
		float average;
		int number = 0;
		//참조 변수 선언, 객체 생성 그리고 초기화
		Scanner scanner = new Scanner(System.in);
		
		// 1.1. 성명, 국어점수, 영어점수를 입력받는다.
		name = scanner.next();
		koreanScore = scanner.nextInt();
		englishScore = scanner.nextInt();
		//1. 파일의 끝이 아닌동안 반복한다.
		while(name.compareTo("exit") != 0) {
			// 1.2. 번호를 매기다.
			number++;
			// 1.3. 총점을 구한다.
			sum = koreanScore + englishScore;
			// 1.4. 평균을 구한다.
			average = sum / SUBJECTCOUNT;
			// 1.5. 평가를 하다.
			if (average >= PASSINGAVERAGE) {//then
				isPassed = "PASS";
			}
			else {
				isPassed = "FAIL";
			}
			// 1.6. 성명, 국어점수, 영어점수, 총점, 평균, 평가를 출력한다.
			System.out.printf("번호 : %d 성명 : %s 국어점수 : %d 영어점수 : %d 총점 : %d 평균 : %.1f 통과여부 : %s\n",
					number, name, koreanScore, englishScore, sum, average, isPassed);
			// 1.1. 성명, 국어점수, 영어점수를 입력받는다.
			name = scanner.next();
			koreanScore = scanner.nextInt();
			englishScore = scanner.nextInt();
		}
		
		scanner.close();		
		//끝내다.
		
	}
}
