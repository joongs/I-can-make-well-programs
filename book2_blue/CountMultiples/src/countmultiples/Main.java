//Main.java
/*
 * 파일   명칭 : Main.java
 * 메소드명칭 : main
 * 기         능 : 1부터 100000까지 수들에서 개수를 세고, 7의배수를 구하고, 개수와 7의 배수를 출력한다.
 *          그리고 마지막에 전체 개수를 출력한다.
 * 입         력 : 없음
 * 출         력 : 개수
 * 작   성   자 : Joey
 * 작성   일자 : 2016/11/28 
 */

// package 선언
package countmultiples;

// Main 클래스 선언및 정의
public class Main {
	// main 메소드 선언 및 정의
	public static void main(String[] argc) {
		//상수 변수들 선언
		final int MAX = 100000;
		final int MULTIPLE = 7;
		
		//자동 변수들 선언
		int count = 0;
		int number = 0;
		
		//1. 제목을 출력한다.
		System.out.println("개수\t\t\t7의 배수");
		
		//2. 수가 MAX보다 클떄까지 반복한다.
		do {
			// 2.2. 7의 배수를 구한다.
			number += MULTIPLE;
			// 2.1. 개수를 센다.		
			count++;	
			// 2.3. 개수와 7의 배수를 출력한다.
			System.out.printf("%d\t\t\t%d\n", count, number);
		}while(number <= MAX);
		count--;
		
		//3. 개수를 출력한다.
		System.out.println("7의 배수 개수 " + count);
		
		//4. 끝내다.
	}	
}