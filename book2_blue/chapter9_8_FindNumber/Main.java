//Main.java
/*
 * 파일   명칭 : Main.java
 * 메소드명칭 : main
 * 기         능 : 1부터 50까지 수들에서, 순서를 세고, 두항을 구하고, 피보나치수를 구하며 그때 순서와 피보나치 수를 출력한다.
 *           마지막으로 피보나치 수를 출력한다.
 * 작   성  자 : Joey
 * 작성  일자 : 2016/12/23
 * */

//패키지 선언
package findnumber;

//메일 클래스 선언 및 정의
public class Main {
	//메인 함수 선언 및 정의
	public static void main(String[] args) {
		//상수 선언 및 정의
		final int MAX = 50;
		
		//자동 변수 선언 및 정의
		long fibonacciNumber = 0;
		long fibonacciOne;
		long fibonacciTwo = 1;
		int count;
		
		//1. 제목을 출력한다.
		System.out.println("순서\t\t피보나치수");
		//2. 수가 MAX보다 작거나 같은 동안 반복한다.
		for(count = 1; count<= MAX; count++) {
			//2.2. 두항을 구한다.
			fibonacciOne = fibonacciTwo;
			fibonacciTwo = fibonacciNumber;
			//2.3. 피보나치수를 구한다.
			fibonacciNumber = fibonacciOne + fibonacciTwo;
			//2.4. 순서와 피보나치수를 출력한다.
			System.out.printf("%d\t\t%d\n", count, fibonacciNumber);
			//2.1. 순서를 세다.
		}			
		//3. 피보나치수를 출력한다.
		System.out.println("50번째 항 : " + fibonacciNumber);
		//4. 끝내다.
	}
}
