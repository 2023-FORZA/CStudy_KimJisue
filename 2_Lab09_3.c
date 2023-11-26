//2_Lab09_3.c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int size = 0;
int que[10000];

void push(int data) {
	que[size] = data;
	size++;
}
int empty() {
	if (size == 0)
		return 1;
	return 0;
}
int pop() {
	if (empty()) 
		return -1;
	size--;
	return que[0];
}
int front() {
	if (empty())
		return -1;
	return que[0];
}
int back() {
	if (empty())
		return -1;
	return que[size - 1];
}

int main() {

    int N = 0, data = 0;
    char command[5] = { 0, };

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%s", command);
        if (!strcmp(command, "push")) {
            scanf("%d", &data);
            push(data);
        }
        else if (!strcmp(command, "pop")) {
            printf("%d\n", pop());
            for (int i = 0; i < size; i++)
                que[i] = que[i + 1];
        }
        else if (!strcmp(command, "empty")) {
            printf("%d\n", empty());
        }
        else if (!strcmp(command, "size")) {
            printf("%d\n", size);
        }
        else if (!strcmp(command, "front")) {
            printf("%d\n", front());
        }
        else if (!strcmp(command, "back")) {
            printf("%d\n", back());
        }

    }


    return 0;
}

//큐 : 선입선출방식 , 한쪽 끝(rear)에서 삽입 작업, 다른 쪽 끝(front)에서 삭제 작업이 양쪽으로 이루어짐