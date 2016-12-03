//Main.java
/**********************************************
 * 파일명 : Main.java
 * 기능 : 1부터 100까지 숫자를 세고 합을 구하고 합을 출력한다.
 * 메소드 : main
 * 출력 : 합
 * 입력 : 없음
 * 작성자 : Joey
 * 작성일자 : 2016/11/14
***********************************************/
public class Main {
	public static void main(String[] args) {
		final int MAXIMUM = 100;
		final int MINIMUM = 1;
		int sum = 0;
		int number = MINIMUM;
		
		//1. 100보다 작거나 같은 동안 반복한다.
		while(number <= MAXIMUM) {			
			// 1.1. 합을 구한다.
			sum += number;
			// 1.2. 숫자를 센다.
			number++;
		}
		//2. 합을 출력한다.
		System.out.printf("%d\n", sum);
		//3. 끝내다.
	}
}
