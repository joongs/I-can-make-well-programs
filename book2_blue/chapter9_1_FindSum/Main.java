//Main.java
/*
파일   명칭 : Main.java
메소드명칭 : main
기         능 : 1부터 99까지 수들에서 홀수를 세고 홀수의 합을 구한다. 이때 수와 홀수의 합을 출력한다.
                 마지막으로 홀수의 합을 출력한다.
작   성   자 : Joey
작성   일자 : 2016/12/8
*/

//패지지
package findsum;

//메인 클래스 정의
public class Main {
	//메인 메소드 정의
	public static void main(String[] args) {
		//상수 선언 및 정의
		final int MAX = 99;
		final int MULTIPLE = 2;
		
		//자동변수 선언 및 정의
		int sum = 0;
		int number;
		
		//1. 제목을 입력한다.
		System.out.println("수\t\t\t홀수의 합");
		//2. 수가 MAX보다 작거나 같은 동안 반복한다.
		for(number = 1; number <= MAX; number += MULTIPLE) {			
			//2.2. 홀수의 합을 구한다.
			sum += number;
			//2.3. 수와 홀수의 합을 출력한다.
			System.out.printf("%d\t\t\t%d%n", number, sum);
			
			//2.1. 수를 센다.
		}
		//3. 홀수의 합을 출력한다.
		System.out.println("홀수의 합 : " + sum);
		
		//4. 끝내다.
	}
}
