//Evaluate.c
/**************************************************************
���ϸ� : Evaluate.c
��� : �Է��ϴ� ��ŭ ������ �Է¹ް�, �������� ���ϰ� �������� �������� ���ϰ�, ¦���� ������ Ȧ���� ������ ����, ¦���� ������ Ȧ���� ������ ����Ѵ�.
�Լ���Ī : main
��� : ¦���� ����, Ȧ���� ����
�Է� : ����
�ۼ��� : �輼��
�ۼ����� : 2016/11/12
**************************************************************/
//��ó����
#include <stdio.h>
#define DIVISOR 2
#define EVENREMAINDER 0

//�Լ��� ����
int main(int argc, char* argv[]);

//�Լ��� ����
int main(int argc, char* argv[]){
	//�ڵ����� ���� �� ����
	int evenCount = 0;
	int oddCount = 0;
	int number;
	int remainder;

	// 1.1. ���� �Է¹޴´�.
	scanf("%d", &number);
	//1. ������ ���� �ƴѵ��� �ݺ��Ѵ�.
	while (!feof(stdin)) {		
		// 1.2. �������� ���Ѵ�.
		remainder = number;
		while (remainder >= DIVISOR) {
			remainder -= DIVISOR;
		}
		// 1.3. �򰡸� �Ѵ�.
		if (remainder == EVENREMAINDER) {
			//  1.3.1. ���̸�, ¦���� ������ ����.
			evenCount++;
		}
		else {
			//  1.3.2. �����̸�, Ȧ���� ������ ����.
			oddCount++;
		}		
		// 1.1. ���� �Է¹޴´�.
		scanf("%d", &number);
	}
	//2. ¦���� ����, Ȧ���� ������ ����Ѵ�.
	printf("%d %d\n", evenCount, oddCount);
	//3. ������
	return 0;
}