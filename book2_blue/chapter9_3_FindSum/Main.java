//Main.java
/*
파일   명칭 : Main.java
메소드명칭 : main
기         능 : 1부터 100까지 수들에서, 수를 세고, 수까지 합을 구하고 총합을 구한다. 이때 수, 수까지의 합, 총합을 출력한다.
		  마지막으로 총합을 출력한다.
작  성  자 : Joey
작성  일자 : 2016/12/11
수정  일자 : 2016/12/12 number가 미지수이기 때문에 for 대신 while 사용해야한다
*/

//패키지를 선언한다.
package findsum;

//메인 클래스를 선언 및 정의
public class Main {
	//메인 메소드를 선언 및 정의
	public static void main(String[] args) {
		//상수 선언 및 정의
		final int MAX = 100;
		//자동변수 선언 및 정의
		int sum = 0;
		int number;
		int sumToNumber;
		int temp;
		
		//1. 제목을 출력한다.
		System.out.println("수\t\t수까지의 합\t\t총합");
		
		//2. 수가 MAX보다 작거나 같은 동안 반복한다.
		for(number = 1; number <= MAX; number++) {
			//2.2. 수까지의 합을 구한다.
			sumToNumber = 0;
			temp = 1;
			while(temp <= number) {
				sumToNumber += temp;
				temp++;
			}
			//2.3. 총합을 구한다.
			sum += sumToNumber;
			
			//2.4. 수, 수까지의 합, 총합을 출력한다.
			System.out.printf("%d\t\t%d\t\t%d%n", number, sumToNumber, sum);
			
			//2.1. 수를 세다.
		}

		//3. 총합을 출력한다.
		System.out.println("총합 : " + sum);
		
		//4. 끝내다.
	}
}
