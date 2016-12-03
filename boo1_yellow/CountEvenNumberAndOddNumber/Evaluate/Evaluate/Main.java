//Main.java
/******************************************************
 * 파일명 : Main.java
 * 기능 : 입력하는 수만큼 수를 입력받고, 나머지를 계산하고, 나머지를 기준으로 평가하고,
 *        홀수의 개수와 짝수의 개수를 세고, 홀수개수와 짝수개수를 출력한다.
 * 메소드 : main
 * 작성자 : Joey
 * 작성일자 : 2016/11/14
 ******************************************************/
import java.util.Scanner;

public class Main {
	public static void main(String[] argc) {
		final int DIVISOR = 2;
		final int EVENREMAINDER = 0;
		int evenCount = 0;
		int oddCount = 0;
		int number;
		int remainder;
		
		//참조변수 선언, 객체의 생성 그리고 초기화
		Scanner scanner = new Scanner(System.in);
		// 1.1. 수를 입력받는다.
		number = scanner.nextInt();		
		//1. 파일의 끝이 아닌동안 반복한다.
		while(number != -1) {			
			// 1.2. 나머지를 구한다.
			remainder = number;
			while (remainder >= DIVISOR) {
				remainder -= DIVISOR;
			}
			// 1.3. 평가를 한다.
			if (remainder == EVENREMAINDER) {
				//  1.3.1. 참이면 짝수의 개수를 센다.
				evenCount++;
			}
			else {
				//  1.3.2. 거짓이면 홀수의 개수를 센다.
				oddCount++;
			}			
			// 1.1. 수를 입력받는다.
			number = scanner.nextInt();
		}
		//2. 짝수의 개수, 홀수의 개수를 출력한다.
		System.out.printf("%d %d\n", evenCount, oddCount);
		
		scanner.close();
		//3. 끝내다.
	}
}

/////////////////////////////////////////////////////

//Main.java
/******************************************************
 * 파일명 : Main.java
 * 기능 : 입력하는 수만큼 수를 입력받고, 나머지를 계산하고, 나머지를 기준으로 평가하고,
 *        홀수의 개수와 짝수의 개수를 세고, 홀수개수와 짝수개수를 출력한다.
 * 메소드 : main
 * 작성자 : Joey
 * 작성일자 : 2016/11/15
 * 원장님 피드백
 * 1. 나머지 연산자(%)사용
 ******************************************************/
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		final int DIVISOR = 2;
		final int EVENREMAINDER = 0;
		int evenCount = 0;
		int oddCount = 0;
		int number;
		int remainder;
		
		//참조변수 선언, 객체의 생성 그리고 초기화
		Scanner scanner = new Scanner(System.in);
		// 1.1. 수를 입력받는다.
		number = scanner.nextInt();		
		//1. 파일의 끝이 아닌동안 반복한다.
		while(number != -1) {			
			remainder = number;
			remainder %= DIVISOR;
			// 1.2. 짝수이면, 짝수의 개수를 세다.
			if (remainder == EVENREMAINDER) {
				evenCount++;
			}
			// 1.3. 홀수이면, 홀수의 개수를 세다.
			else {
				oddCount++;
			}			
			// 1.1. 수를 입력받는다.
			number = scanner.nextInt();
		}
		//2. 짝수의 개수, 홀수의 개수를 출력한다.
		System.out.printf("%d %d\n", evenCount, oddCount);
		
		scanner.close();
		//3. 끝내다.
	}
}

