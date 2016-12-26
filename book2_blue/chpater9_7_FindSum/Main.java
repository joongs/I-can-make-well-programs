//Main.java
/*
 * 파일   명칭 : Main.java
 * 메소드명칭 : main
 * 기         능 : 1부터 10까지 수들에서, 수를 세고 더할 수를 구하고, 합을 구한다.
 *           그때 수, 더할 수, 합을 출력한다. 마지막으로 합을 출력한다.
 * 작   성  자 : Joey
 * 작성  일자 : 2016/12/26
 * */

//패키지 선언
package findsum;

//메인 클래스 선언 및 정의
public class Main {
	//메인 함수 선언 및 정의
	public static void main(String[] args) {
		//상수 선언 및 정의
		final int MAX = 10;
		final int MULTIPLE = 2;
		
		//자동 변수 선언 및 정의
		double sum = 0.0;
		int number;
		double numberToAdd;
		long factorial;
		int factorialNumber = 1;
		int count;
		int remainder;
		
		//1. 제목을 출력한다.
		System.out.println("수\t\t더할 수\t\t합");
		//2. 수가 MAX보다 작거나 같은동안 반복한다.
		for(number = 1; number <= MAX; number++) {
			//2.2. 더할수를 구한다.
			factorial = 1;
			count = 1;
			while (count <= factorialNumber) {
				factorial = factorial * count;
				count++;
			}
			factorialNumber += 2;
			remainder = number % MULTIPLE;
			if (remainder != 0) {
				numberToAdd = number / ((double)factorial);
			}
			else {
				numberToAdd = (number / ((double)factorial)) * (-1);
			}
			//2.3. 합을 구한다.
			sum += numberToAdd;
			//2.4. 수, 더할 수, 합을 출력한다.
			System.out.printf("%d\t\t%.20f\t\t%.20f%n", number, numberToAdd, sum);
			//2.1. 수를세다.
		}
		//3. 합을 출력한다.
		System.out.println("합 : " + sum);
		//4. 끝내다.
		
	}
}
