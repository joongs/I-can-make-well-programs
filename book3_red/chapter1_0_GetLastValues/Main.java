//Main.java
/*
 * 파일  명칭 : Main.java
 * 메소드명칭 : main
 * 기      능 : 1부터 시작해서 공차가 2인 등차수열의 합이 1000을 넘은 후
 *             항의 위치, 항의 값 그리고 합을 출력한다.
 * 입      력 : 없음
 * 출      력 : 초과한 후 항의 위치, 의 값, 합
 * 작  성  자 : Joey
 * 작성  일자 : 2017/01/05
 */

package getlastvalues;

//메인 클래스 정
public class Main {
	//메인 함수 정
	public static void main(String[] args) {
		//상수 선언들
		final short MAX = 1000;
		final short DELTA = 2;
		
		//자동변수 선언들
		short position = 1;
		short term = 1;
		short sum = 1;
		
		//1. 합이 MAX보다 작거나 같은 동안 반복한다.
		while(sum <= MAX) {
			//1.4.항의 위치, 항의 값, 합을 출력한다.
			System.out.printf("%d %d %d\n", position, term, sum);
			//1.1.몇 번째 인지 구한다.
			position++;
			//1.2.항의 값을 구한다.
			term += DELTA;
			//1.3.합을 구한다.
			sum += term;
		}
		//2.항의 위치, 항의 값, 합을 출력한다.
		System.out.format("%d %d %d%n", position, term, sum);
		//3.끝내다.
	}
}
