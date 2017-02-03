//Main.java
/*
 * 파일 명칭 : Main.java
 * 메소드명칭 : main
 * 기    능 : 10회에 한 해 평균을 입력받아 평균에 해당하는 평점을 구하고 출력하다.
 * 입    력 : 평균
 * 출    력 : 평점
 * 작 성 자 : Joey
 * 작성 일자 : 2017/02/03
 */
//패키지 선언 
package getgrade;

//import
import java.util.Scanner;

//클래스 정의 
public class Main {
	//메소드 정의
	public static void main(String[] args) {
		//상수 정의들
		final short MAX = 20;
		final float GRADE_A = 90.0F;
		final float GRADE_B = 80.0F;
		final float GRADE_C = 70.0F;
		final float GRADE_D = 60.0F;
		
		//자동변수 정의들
		char grade;
		float average;
		short number = 0;
		short i;
		
		//객체 생성 문
		Scanner scanner = new Scanner(System.in);
		
		//1. 제목을 출력한다.
		System.out.println("번호\t평균\t평점");
		
		//2. MAX번 반복한다.
		for(i = 1; i <= MAX; i++) {
			//2.1. 번호를 세다.
			number++;
			
			//2.2. 평균을 입력 받는다.
			average = scanner.nextFloat();
			
			//2.3. 평균에 대해 평점을 매긴다.
			if(average >= GRADE_A) {
				grade = 'A';
			} else if (average >= GRADE_B) {
				grade = 'B';
			} else if (average >= GRADE_C) {
				grade = 'C';
			} else if (average >= GRADE_D) {
				grade = 'D';
			} else {
				grade = 'F';
			}
			
			
			//2.4. 번호, 평균, 평점을 출력한다.
			System.out.format("%d%t%.1f%t%c%n", number, average, grade);
		}
		
		scanner.close();
		//3. 끝내다.
	}
}

//result
번호	평균	평점
50
1	50.0	F
60
2	60.0	D
70
3	70.0	C
80
4	80.0	B
90
5	90.0	A
100
6	100.0	A
89.9
7	89.9	B
79.9
8	79.9	C
69.9
9	69.9	D
59.9
10	59.9	F
