//Evaluate.c
/**************************************************************
���ϸ� : Evaluate.c
��� : 1���� 100,000���� ���ڸ� ����, �������� ����ϰ�, �������� �������� ���ϰ�, 
      ����� ������ ����, ����� ������ ����Ѵ�.
�Լ���Ī : main
��� : ����� ����
�Է� : ����
�ۼ��� : �輼��
�ۼ����� : 2016/11/12
**************************************************************/
// ��ó����
#include <stdio.h>
#define MAXIMUM 100000
#define MINIMUM 1
#define DIVISOR 7
#define CONDITION 0

// �Լ�����
int main(int argc, char* argv[]);

// �Լ�����
int main(int argc, char* argv[]) {
	//�ڵ� ���� ���� �� ����
	int mutiplieCount = 0;
	int remainder;
	int number = MINIMUM;

	//1. 100000���� �۰ų� ���� ���� �ݺ��Ѵ�
	while (number <= MAXIMUM) {
		// 1.1. �������� ���Ѵ�
		remainder = number;
		while (remainder >= DIVISOR) {
			remainder -= DIVISOR;
		}
		// 1.2. ������� �Ǵ��Ѵ�
		if (remainder == CONDITION) {
			//  1.2.1. ���ΰ��, ����� ������ ����
			mutiplieCount++;
		}
		// 1.3. ���ڸ� ����.
		number++;
	}
	//2. ����� ������ ����Ѵ�
	printf("%d\n", mutiplieCount);

	//3. ������
	return 0;
}