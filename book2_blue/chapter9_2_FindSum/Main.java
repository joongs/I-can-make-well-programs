//Main.java
/*
파일   명칭 : Main.java
메소드명칭 : main
기         능 : 1부터 100까지 수들에서, 수를 세고, 수가 홀수인지 짝수인지 판단하여 합을 구하고, 
                  그때 수, 홀수의 합, 짝수의 합을 출력한다. 마지막으로 홀수의 합, 짝수의 합을 출력한다.
작  성  자 : Joey
작성  일자 : 2016/12/07
*/

//패키지 정의
package findsum;

//메인 클래스 선언 및 정의
public class Main {
	//메인  함수 선언 및 정의
	public static void main(String[] args) {
		//상수 선언 및 정의
		final int MAX = 100;
		final int DIVISOR = 2;
		
		//자동변수 선언 및 정의
		int oddSum = 0;
		int evenSum = 0;
		int remainder;
		int number;
		
		//1.제목을 출력한다.
		System.out.println("수\t\t홀수의 합\t짝수의 합");
		//2.수가 MAX보다 작거나 같은동안 반복한다.
		for(number = 1; number <= MAX; number++) {
			//2.2.수가 홀수인지 짝수인지 판단한다.
			remainder = number % DIVISOR;
			if (remainder != 0) {
				//2.2.1. 훌수이면 합을 구한다.
				oddSum += number;
			} else {
				//2.2.2. 짝수이면 합을 구한다.
				evenSum += number;
			}

			//2.3.수, 홀수의 합, 짝수의 합을 출력한다.
			System.out.printf("%d\t\t%d\t%d%n", number, oddSum, evenSum);
			
			//2.1.수를 센다.			
		}

		//3.홀수의 합, 짝수의 합을 출력한다.
		System.out.println("홀수의 합 : " + oddSum + "짝수의 합 : " + evenSum);
		//4.끝내다.
	}
}
