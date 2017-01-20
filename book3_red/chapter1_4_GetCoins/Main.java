//Main.java
/*
 * 파일   명칭 : Main.java
 * 메소드명칭 : main
 * 기         능 : 10원, 100원, 500원 각각 최대 10를 사용해서 금액을 만든다.
 *           이때 10원 개수, 100원 개수, 500원 개수를 출력한다.
 * 입         력 : 없음
 * 출         력 : 10원 개수, 100원 개수, 500원 개수
 * 작   성   자 : Joey
 * 작 성  일자 : 2017/01/20
 */

//패키지 선언
package getcoins;

//메인 클래스 선언
public class Main {
	//메인 메소드 선언
	public static void main(String[] args) {
		//상수선언들
		final short MAX = 10;
		final short TEN = 10;
		final short HUNDRED = 100;
		final short FIVEHUNDRED = 500;
		
		//자동변수 선언들
		short numberTen = 0;
		short numberHundred = 0;
		short numberFiveHundred = 0;
		short balance = 3800;
		
		//1. 금액이 0보다 클경우 반복한다.
		while (balance > 0) {
			//1.1. 금액이 10원 보다 크거나 같을 경우, 10원 개수를 세다.
			if (balance >= TEN && numberTen < MAX) {
				numberTen++;
				balance -= TEN;
			}
			//1.2. 금액이 100원 보다 크거나 같을 경우, 100원 개수를 세다.
			if (balance >= HUNDRED && numberHundred < MAX) {
				numberHundred++;
				balance -= HUNDRED;
			}
			//1.3. 금액이 500원 보다 크거나 같을 경우, 500원 개수를 세다.
			if(balance >= FIVEHUNDRED && numberFiveHundred < MAX) {
				numberFiveHundred++;
				balance -= FIVEHUNDRED;
			}
			//1.4. 10원 개수, 100원 개수, 500원 개수, 잔액을 출력한다.
			System.out.printf("%d %d %d %d\n", numberTen, numberHundred, numberFiveHundred, balance);
		}
		//2. 10원 개수, 100원 개수, 500원 개수를 출력한다.
		System.out.println(numberTen + " " + numberHundred + " " + numberFiveHundred);
		
		//3. 끝내다.
	}
}
