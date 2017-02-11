//Main.java
/*
 * 파일   명칭 : Main.java
 * 메소드명칭 : main
 * 기         능 : 100개 숫자를 입력될 때 수를 판단해서 양수, 음수의 개수를 세고, 양수면, 홀수, 짝수 개수를 세다.
 *          이때 숫자, 양수개수, 음수개수, 홀수개수, 짝수개수를 출력한다.
 * 입         력 : 숫자들
 * 출         력 : 양수개수, 음수개수, 홀수개수, 짝수개수
 * 작   성   자 : Joey
 * 작성   일자 : 2017/02/11
 */
//패키지 선언
package getnumbers;

//import
import java.util.Scanner;

//클래스 정의
public class Main {
	//메소드 정의
	public static void main(String[] args) {
		//상수 선언들
		final short MAX = 5;
		final short DIVISOR = 2;
		final short ZERO = 0;
		
		//자동변수 선언들
		short positiveNumber = 0;
		short negativeNumber = 0;
		short oddNumber = 0;
		short evenNumber = 0;
		long number;
		long remainder;
		short i;
		
		//객체 생성 문장
		Scanner scanner = new Scanner(System.in);
		
		//1. MAX동안 반복한다.
		for(i = 1; i <= MAX; i++) {
			//1.2. 숫자를 입력받는다.
			number = scanner.nextLong();
			//1.2. 수가 양수인지 음수인지 판단해서 개수를 세다.
			if (number > ZERO) {
				positiveNumber++;
				//1.2.1. 양수이면, 홀수인지 짝수인지 판단해서 개수를 세다.
				remainder = number % (long)DIVISOR;
				if (remainder == ZERO) {
					evenNumber++;
				} else {
					oddNumber++;
				}
				
			} else if (number < ZERO) {
				negativeNumber++;
			}
			//1.2. 숫자, 양의 개수, 음의 개수, 홀수 개수, 짝수개수를 출력한다.
			System.out.printf("%d %d %d %d %d%n", number, positiveNumber, 
					negativeNumber, oddNumber, evenNumber);
		}
		
		//2. 끝내다.
		scanner.close();
	}
}

//result
5
5 1 0 1 0
10
10 2 0 1 1
-5
-5 2 1 1 1
-10
-10 2 2 1 1
0
0 2 2 1 1
