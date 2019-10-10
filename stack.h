#pragma once

const int MAX_HEIGHT = 10;
#ifndef stack_h
#define stack_h

class Stack {
private:
	int top;
	int a[MAX_HEIGHT];
public:
	Stack();
	int Height();
	bool isEmpty();
	bool isFull();
	void Push(int);
	int Pop();
	int Top();
	void Clear();

};
#endif