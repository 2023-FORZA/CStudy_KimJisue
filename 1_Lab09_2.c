//11720 ������ ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //�����Ҵ� malloc�� ���� ���
#include <string.h> // strcpy�� ���� ���
int main(void) {
	int N;
	scanf("%d", &N);                               //���� ���� �Է¹ޱ�

	int sum;
	sum = 0;

	char a[101];
	scanf("%s", a);                                // N���� �� �Է� �ޱ� //������� �Է¹޾ƾ���

	char* num = (char*)malloc(N * sizeof(char));   //N�� * 8��Ʈ ��ŭ �� �޸� �Ҵ�
	strcpy(num, a);                                //a�� �ִ� ���ڿ� ��ü�� num�� ����


	for (int i = 0; i <N; i++) {                   
		sum += num[i] - '0';                       //�� ���ϱ�
	}
	free(num);                                     // �޸� ����
	printf("%d", sum);                             // �� ���
	return 0;   
}