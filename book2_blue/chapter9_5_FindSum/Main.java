//Main.java
/*
파일    명칭 : Main.java
메소드 명칭 : main
기          능 : 1부터 100까지 수들에서, 수를세고, 3의 배수와 5의 배수가 아닌지 확인하고, 합을 구한다.
                   마지막으로 합을 출력한다.
작   성   자 : Joey
작성   일자 : 2016/12/15
*/

//패키지 선언 및 정의
package findsum;

//메인 클래스 선언 및 정의
public class Main {
	//메인 메소드 선언 및 정의
	public static void main(String[] args) {
		//상수 선언 및 정의
		final int MAX = 100;
		final int MULTIPLETHREE = 3;
		final int MULTIPLEFIVE = 5;
		
		//자동변수 선언 및 정의
		int sum = 0;
		int number;
		int remainderThree;
		int remainderFive;
		
		//1. 제목을 출력한다.
		System.out.println("수\t\t합");
		
		//2. 수가 MAX보다 작거나 같은 동안 반복한다.
		for(number = 1; number <= MAX; number++) {
			//2.2. 3의 배수와 5의 배수가 아닌지 확인한다.
			remainderThree = number % MULTIPLETHREE;
			remainderFive = number % MULTIPLEFIVE;
			
			//2.3. 참이면, 합을 구한다.
			if(remainderThree != 0 && remainderFive != 0) {
				sum += number;
				//2.4. 참이면, 수, 합을 출력한다.
				System.out.printf("%d\t\t%d%n", number, sum);
			}
			//1. 수를 세다.			
		}
		//3. 합를 출력한다.
		System.out.println("합 : " + sum);
		
		//4. 끝내다.		
	}
}
