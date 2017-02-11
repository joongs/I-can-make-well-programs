//Main.java
/*
파일   명칭 : Main.java
함수   명칭 : main
기      능 : 1000개의 숫자를 입력받아서 평균을 구하고 마지막으로 평균을 출력한다.
입      력 : 숫자
출      력 : 평균
작  성  자 : Joey
작성  일자 : 2017/02/08
*/
//패키지 정의
package getaverage;

//입력 기능을 위한 클래스 추가
import java.util.Scanner;

//클래스 정의
public class Main {
	//메소드 정의
	public static void main(String[] args) {
		//상수 선언
		final short MAX = 5;
		
		//자동변수 선언들
		float average = 0.0F;
		short input;
		long sum = 0;
		short i;
		
		//객체 선언 및 초기화
		Scanner scanner = new Scanner(System.in);
		
		//1. MAX번 동안 반복한다.
		for(i = 1; i <= MAX; i++) {
			//1.1. 숫자를 입력받는다.
			input = scanner.nextShort();
			
			//1.2. 합을 구한다.
			sum += (long)input;
		
			//1.3. 숫자와 합을 출력한다.
			System.out.printf("%d %d%n", input, sum);
			
		}
		
		//2. 평균을 구한다.
		average = sum / (MAX * 1.0F);
		
		//3. 평균을 출력한다.
		System.out.format("평균 : %.1f%n", average);
		
		//4. 끝내다.
		scanner.close();
	}
}

//입출력
10
10 10
20
20 30
30
30 60
40
40 100
50
50 150
평균 : 30.0
