//Main.java
/*
 * 파일    명칭 : Main.java
 * 메소드 명칭 : main
 * 기          능 : 1부터 100000까지 수들에서 개수를 세고, 7의 배수를 구하고, 개수와 7의 배수를 출력한다.
 *          그리고 마지막으로 전체 개수를 출력한다.
 * 작   성   자 : Joey
 * 작성   일자 : 2016/11/28
 */

// 패키지 선언
package countmultiples;

//클래스 선언
public class Main {
	//메소드 선언
	public static void main(String[] argc) {
		//상수 변수 선언
		final int MAX = 100000;
		final int MULTIPLE = 7;
		
		//자동 변수 선언
		int count = 0;
		int number;
		
		//1. 제목을 출력한다.
		System.out.println("개수\t\t\t7의 배수");

		//2. 수가 MAX보다 작거나 같은동안 반복한다.
		for(number = MULTIPLE; number <= MAX; number += MULTIPLE) {
			// 2.1. 개수를 센다.
			count++;
			
			// 2.3. 개수와 7의 배수를 출력한다.
			System.out.printf("%d\t\t\t%d\n",  count, number);
			
			// 2.2. 7의 배수를 구한다.
		}
		
		//3. 개수를 출력한다.
		System.out.println("7의 배수 개수 " + count);
		
		//4. 끝내다.
	}
}
