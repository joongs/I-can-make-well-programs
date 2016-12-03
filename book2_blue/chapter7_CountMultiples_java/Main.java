//Main.java
/*
 * 파일  명칭 : Main.java
 * 메소드명칭 : main
 * 기        능 : 1에서 100000까지 수들에서 수를 세고, 수가 7의 배수인지 확인하며, 
 *           7의 배수이면 개수를 세고, 그 때 개수와 7의 배수를 출력한다.
 *           그리고 마지막으로 전체 개수를 출력한다.
 * 입        력 : 없음
 * 출        력 : 개수
 * 작   성   자 : Joey
 * 작성  일자 : 2016/12/03 
 * */
//패키지 선언
package countmultiples;

//메인 클래스 정의
public class Main {
	//메인함수 정의
	public static void main(String[] args) {
		//상수 정의 및 선언
		final int MAX = 100000;
		final int MULTIPLE = 7;
		
		// 자동변수 선언 및 정의
		int count = 0;
		int number;
		int remainder;
		
		//1. 제목을 출력한다.
		System.out.println("개수\t\t\t7의 배수");
		//2. 수가 MAX보다 작거나 같은동안 반복한다.
		for(number = 1; number <= MAX; number++) {
			//2.2. 수가 7의 배수인지 확인한다.
			remainder = number % MULTIPLE;
			if (remainder == 0) {
				//2.2.1. 개수를 센다.
				count++;
				//2.2.2. 개수와 7의 배수를 출력한다.
				System.out.printf("%d\t\t\t%d%n", count, number);
			}
			//2.1. 수를 센다.
		}
		//3. 개수를 출력한다.
		System.out.println("7의 배수 개수 : " + count);
		//4. 끝내다.
	}
}
