#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
	int M;
	scanf("%d", &M);

	int cup[3] = { 1,2,3 };  //��1�� �� ����
	int X, Y;
	int temp; // ��ġ ������ ���� �ӽú���
	for (int i = 1; i <= M; i++) {
		scanf("%d %d", &X, &Y);    //��ġ�� �ٲ� �� 
		temp = cup[X - 1];           //�迭�� 0���� ������!! -1 ���ֱ�
		cup[X - 1] = cup[Y - 1];
		cup[Y - 1] = temp;

	}
	for (int j = 0; j < 3; j++) {       //���� ����ִ� �� ã��
		if (cup[j] == 1)
			printf("%d", j + 1);
	}
	return 0;
}

