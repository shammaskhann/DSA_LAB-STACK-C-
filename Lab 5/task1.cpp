#include <iostream>
using namespace std;
int top = -1;
int max_size = 7;
int stack[7];
void pop() {
	if (top == -1) {
		cout << "Stack is empty" << endl;
	}
	else {
		top--;
	}
}
void push(int num) {
	if (top == max_size - 1) {
		cout << "Stack is full" << endl;
	}
	else {
		top++;
		stack[top] = num;
	}
}
void display() {
	if (top == -1) {
		cout << "Stack is empty" << endl;
	}
	else {
		cout<<"Stack: ";
		for (int i = top; i >= 0; i--) {
			cout << stack[i] << " ";
		}
		cout << endl;
	}
}
void main() {
	push(5);
	push(2);
	push(3);
	push(6);
	push(9);
	push(3);
	push(7);
	push(9);
	display();
	pop();
	display();
}
