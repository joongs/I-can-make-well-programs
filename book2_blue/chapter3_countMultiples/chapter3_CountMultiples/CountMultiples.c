//CountMultiples.c
/*
���ϸ�Ī : CountMultiples.c
��    �� : 1���� 100000���� ���鿡�� ������ ����, 7�� ����� ���ϰ�, ������ 7�� ����� ����Ѵ�.
           �׸��� ���������� ��ü ������ ����Ѵ�.
��    �� : ����
��    �� : ����
�� �� �� : Joey
�ۼ����� : 2016/11/17
*/

//��ó����
#include <stdio.h>
#define MAXIMUM 100000
#define MULTIPLE 7

//�Լ�����
int main(int argc, char* argv[]);

//�Լ�����
int main(int argc, char* argv[]) {
	//�ڵ����� ���� �� ����
	int count = 0;
	int number = 0;

	//1. ������ ����Ѵ�.
	printf("����\t\t\t7�� ���\n");

	//2. ���� MAXIMUM���� Ŭ������ �ݺ��Ѵ�.
	do {
		// 2.2. 7�� ����� ���Ѵ�.
		number += MULTIPLE;
		// 2.1. ������ ����.
		count++;
		// 2.3. ������ 7�� ����� ����Ѵ�.
		printf("%d\t\t\t%d\n", count, number);
	} while (number <= MAXIMUM);
	count--;

	//3. ������ ����Ѵ�.
	printf("7�� ��� ���� %d\n", count);

	//4. ������.
	return 0;
}