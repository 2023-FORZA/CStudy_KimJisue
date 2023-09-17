#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 

int num[100001];
int c = 0;
void push(int num);
void pop();
void top();
void size();
void empty();

int main() {
	int n;
	char stack[10];

	scanf("%d", &n);

	int number[100]; 

	for (int i = 0; i < n; i++) {
		scanf("%s", &stack);
		if (strcmp(stack, "push") == 0) {
			int num;
			scanf("%d", &num);
			push(num);
		}
		else if (strcmp(stack, "pop") == 0) 
			pop();
		else if (strcmp(stack, "top") == 0) 
			top();
		else if (strcmp(stack, "size") == 0) 
			size();
		else if (strcmp(stack, "empty") == 0) 
			empty();
	}
	return 0;
}
void push(int n) {
	num[c] = n;
	c++;
}
void pop() {
	if (c != 0) {
		c--;
		printf("%d\n", num[c]);
		num[c] = 0;
	}
	else
		printf("%d\n", -1);
}
void top() {
	if (c != 0)
		printf("%d\n", num[c - 1]);
	else
		printf("%d\n", -1);
}
void size() {
	printf("%d\n", c);
}
void empty() {
	if (c != 0) 
		printf("0\n");
	else 
		printf("1\n");
}