//Main.java
/*
 * ����   ��Ī : Main.java
 * �޼ҵ��Ī : main
 * ��         �� : 1���� 100000���� ���鿡�� ������ ����, 7�ǹ���� ���ϰ�, ������ 7�� ����� ����Ѵ�.
 *          �׸��� �������� ��ü ������ ����Ѵ�.
 * ��         �� : ����
 * ��         �� : ����
 * ��   ��   �� : Joey
 * �ۼ�   ���� : 2016/11/28 
 */

// package ����
package countmultiples;

// Main Ŭ���� ����� ����
public class Main {
	// main �޼ҵ� ���� �� ����
	public static void main(String[] argc) {
		//��� ������ ����
		final int MAX = 100000;
		final int MULTIPLE = 7;
		
		//�ڵ� ������ ����
		int count = 0;
		int number = 0;
		
		//1. ������ ����Ѵ�.
		System.out.println("����\t\t\t7�� ���");
		
		//2. ���� MAX���� Ŭ������ �ݺ��Ѵ�.
		do {
			// 2.2. 7�� ����� ���Ѵ�.
			number += MULTIPLE;
			// 2.1. ������ ����.		
			count++;	
			// 2.3. ������ 7�� ����� ����Ѵ�.
			System.out.printf("%d\t\t\t%d\n", count, number);
		}while(number <= MAX);
		count--;
		
		//3. ������ ����Ѵ�.
		System.out.println("7�� ��� ���� " + count);
		
		//4. ������.
	}	
}