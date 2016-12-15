//FindSum.c
/*
파일    명칭 : FindSum.c
메소드 명칭 : main
기          능 : 1부터 1000까지 수들에서, 수를세고, 더할 수를 구해서 합을 구한다.
	            그때 수, 더할 수, 합을 출력한다. 마지막으로 합을 출력한다.
작   성   자 : Joey
작성   일자 : 2016/12/15
*/
//패키지 선언
package findsum;

//메인 클래스 선언 및 정의
public class Main {
	//메인 메소드 선언 및 정의
	public static void main(String[] args) {
		//상수선언 및 정의
		final int MAX = 1000;
		final int MULTIPLE = 2;
		
		//자동변수 선언 및 정의
		int sum = 0;
		int number;
		int numberToAdd;
		int remainder;
		
		//1. 제목을 출력한다.
		System.out.println("수\t\t더할 수\t\t합");
		
		//2. 수가 MAX보다 작거나 같은동안 반복한다.
		for(number = 1; number <= MAX; number++) {
			//2.2. 더할 수를 구한다.
			remainder = number % MULTIPLE;
			if(remainder != 0) {
				numberToAdd = number;
			}
			else {
				numberToAdd = number * (-1);
			}
			//2.3. 합을 구한다.
			sum += numberToAdd;
			
			//2.4. 수, 더할 수, 합을 구한다.
			System.out.printf("%d\t\t%d\t\t%d%n", number, numberToAdd, sum);
			
			//2.1. 수를 세다.
		}
		//3. 합을 출력한다.
		System.out.println("합 : " + sum);
		
		//4. 끝내다.
	}
}
