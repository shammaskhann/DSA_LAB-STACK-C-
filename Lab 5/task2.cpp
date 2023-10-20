//#include <iostream>
//#include <string>
//using namespace std;
//int player = 0;
//int top = -1;
//string stack[5];
//int max_size = 5;
//void push(string x)
//{
//	if (top == max_size - 1)
//	{
//		cout << "Stack Overflow" << endl;
//	}
//	else
//	{
//		top++;
//		stack[top] = x;
//	}
//}
//void pop()
//{
//	player++;
//	if (top == -1)
//	{
//		cout << "No Ball Availble for Player " << player<<endl;
//		cout << "Stack Underflow" << endl;
//	}
//	else
//	{
//		cout << "Player " << player << " take " << stack[top] << endl;
//		top--;
//	}
//}
//void display()
//{
//	if (top == -1)
//	{
//		cout << "Stack is empty" << endl;
//	}
//	else
//	{
//		for (int i = top; i >= 0; i--)
//		{
//			cout << stack[i] << " ";
//		}
//		cout << endl;
//	}
//}	
//void main() {
//	push("Red");
//	push("Green");
//	push("Blue");
//	push("Orange");
//	push("Yellow");
//	display();
//	pop();
//	cout << "How many balls are left in a jar? " << top + 1 << endl;
//	pop();
//	cout << "How many balls are left in a jar? " << top + 1 << endl;
//	pop();
//	cout << "How many balls are left in a jar? " << top + 1 << endl;
//	pop();
//	cout << "How many balls are left in a jar? " << top + 1 << endl;
//	pop();
//	cout << "How many balls are left in a jar? " << top + 1 << endl;
//	pop();
//
//}