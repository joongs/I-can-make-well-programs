//Calculate.c
/**********************************************************
���ϸ� : Calculate.c
��� : 1���� 100���� ���ڸ� ����, ���� ����ϰ�, ���� ����Ѵ�.
�Լ���Ī : main
��� : ��
�Է� : ����
�ۼ��� : �輼��
�ۼ����� : 2016/11/12
***********************************************************/
//��ó����
#include <stdio.h>
#define MAXIMUM 100
#define MINIMUM 1

//�Լ�����
int main(int argc, char* argv[]);

//�Լ�����
int main(int argc, char* argv[]) {
	// �ڵ����� ���� �� ����
	int sum = 0;
	int number = MINIMUM;

	//1. 100���� �۰ų� ���� ���� �ݺ��Ѵ�
	while (number <= MAXIMUM) {
		// 1.1. ���� ���Ѵ�
		//sum = sum + number;
		sum += number;
		// 1.2. ���ڸ� ����
		//number = number + 1;
		number++;
	}
	//2. ���� ����Ѵ�
	printf("%d\n", sum);

	//3. ������
	return 0;
}