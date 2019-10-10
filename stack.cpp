#include "stack.h"

Stack::Stack() {
	top = -1;
}

int Stack::Height() {
	return top + 1;
}

bool Stack::isEmpty() {
	if (top == -1) {
		return true;
	}
	return false;
}

bool Stack::isFull() {
	if (top == MAX_HEIGHT - 1) {
		return true;
	}
	return false;
}

void Stack::Push(int x) {
	top++;
	a[top] = x;
	return;
}

int Stack::Pop() {
	int x = a[top];
	top--;
	return x;
}

int Stack::Top() {
	if (isEmpty != false) {
		return;
	}
	return a[top];
}

void Stack::Clear() {
	top = -1;
	return;
}