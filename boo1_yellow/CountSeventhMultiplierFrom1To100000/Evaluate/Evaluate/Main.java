//Main.java
/*****************************************
 * 파일명 : Main.java
 * 기능 : 1부터 100000까지 숫자를 세고, 나머지를 계산하고, 나머지를 기준으로 평가하고,
 *       배수의 개수를 세고 배수의 개수를 출력한다.
 * 메소드 : main
 * 출력 : 배수의 개수
 * 입력 : 없음
 * 작성자 : Joey
 * 작성일자 : 2016/11/14
 *****************************************/

public class Main {
	public static void main(String[] argc) {
		final int MAXIMUM = 100000;
		final int MINIMUM = 1;
		final int DIVISOR = 7;
		final int CONDITION = 0;
		int multipleCount = 0;
		int remainder;
		int number = MINIMUM;
		
		//1. 100000보다 작거나 같은 동안 반복한다.
		while(number <= MAXIMUM) {
			// 1.1. 나머지를 구한다.
			remainder = number;
			while (remainder >= DIVISOR) {
				remainder -= DIVISOR;
			}
			// 1.2. 배수인지 확인한다.
			if (remainder == CONDITION) {
				//  1.2.1. 참이면, 배수의 개수를 센다.
				multipleCount++;
			}			
			// 1.3. 숫자를 센다.
			number++;
		}
		//2. 배수의 개수를 출력한다.
		System.out.printf("%d\n",  multipleCount);
		//3. 끝내다.
	}
}
