//main.c
/*
����  ��Ī : main.c
��      �� : 1���� 100000���� ���鿡�� ������ ����, 7�� ����� ���ϰ�, ������ 7�� ����� ����Ѵ�.
            �׸��� ���������� ��ü ������ ����Ѵ�.
��      �� : ����
��      �� : ����
��  ��  �� : Joey
�ۼ�  ���� : 2016/11/28
*/
//��ó����
#include <stdio.h>
#define MAX 100000
#define MULTIPLE 7

//�Լ� ����
int main(int argc, char* argv[]);

//�Լ� ����
int main(int argc, char* argv[]) {
	//�ڵ����� ���� �� ����
	int count = 0;
	int number = 0;

	//1. ������ ����Ѵ�.
	printf("����\t\t\t7�� ���\n");

	//2. ���� MAX���� �۰ų� �������� �ݺ��Ѵ�.
	for (number = 7; number <= MAX; number = number + MULTIPLE) {
		// 2.1. ������ ����.
		count++;

		// 2.2. ������ 7�� ����� ����Ѵ�.
		printf("%d\t\t\t%d\n", count, number);

		// 2.3. 7�� ����� ���Ѵ�.
	}

	//3. ������ ����Ѵ�.
	printf("7�� ��� ���� %d\n", count);
	
	//4. ������.
	return 0;
}