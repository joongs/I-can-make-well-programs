//Main.java
/*
 * 파일 명칭 : Main.java
 * 메소드명칭 : main
 * 기    능 : 1000만원부터 시작해서 2배가 넘은 후 기간, 이자, 잔액을 출력한다.
 * 입    력 : 없음
 * 출    력 : 기간, 이자, 잔액
 * 작 성 자 : Joey
 * 작성 일자 : 2017/01/08
 */

//패키지 선
package getlastvalues;

//메인클래스 선
public class Main {
	//메인메소드 선언
	public static void main(String[] args) {
		//상수들 선언들
		final float ANUALINTEREST = 7.0F;
		final short MULTIPLE = 2;
		final int PRINCIPAL = 10000000;
		
		//자동변수 선언들
		short year = 0;
		int interests = 0;
		int bankBalance = PRINCIPAL;
		
		//1.잔액이 원금의 2배보다 작거나 같은동안 반복한다.
		while(bankBalance <= PRINCIPAL * MULTIPLE) {
			//1.4. 기간, 이자, 잔액을 출력한다.
			System.out.printf("%d %d %d%n", year, interests, bankBalance);
			//1.1. 기간을 세다.
			year++;
			//1.2. 이자를 구하다.
			interests = (((bankBalance * (int)(ANUALINTEREST * 10)) / 10) / 100);
			//1.3. 잔액을 구하다.
			bankBalance += interests;
		}
		
		//2. 기간, 이자, 잔액을 출력한다.
		System.out.format("%d %d %d%n", year, interests, bankBalance);
		
		//3. 끝내다.
	}
}

//result
0 0 10000000
1 700000 10700000
2 749000 11449000
3 801430 12250430
4 857530 13107960
5 917557 14025517
6 981786 15007303
7 1050511 16057814
8 1124046 17181860
9 1202730 18384590
10 1286921 19671511
11 1377005 21048516
