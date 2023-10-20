//#include <iostream>
//using namespace std;
//int max_size = 9;
//int top = -1;
//int stack[9];
//void pop() {
//    if (top == -1) {
//        cout << "Stack is empty" << endl;
//    }
//    else {
//        top--;
//    }
//}
//void push(int x) {
//    if (top == max_size - 1) {
//        cout << "Stack is full" << endl;
//    }
//    else {
//        top++;
//        stack[top] = x;
//    }
//}
//void push(string x) {
//    if (top == max_size - 1) {
//        cout << "Stack is full" << endl;
//    }
//    else {
//        int A, B, C;
//        A = stack[top];
//        pop();
//        B = stack[top];
//        pop();
//        if (x == "+") {
//            C = A + B;
//        }
//        else if (x == "-") {
//            C = B - A;
//        }
//        else if (x == "*") {
//            C = A * B;
//        }
//        else if (x == "/") {
//            C = B / A;
//        }
//        top++;
//        stack[top] = C;
//    }
//}
//void display() {
//    if (top == -1) {
//        cout << "Stack is empty" << endl;
//    }
//    else {
//        cout << "Stack: ";
//        for (int i = top; i >= 0; i--) {
//            cout << stack[i] << " ";
//        }
//        cout << endl;
//    }
//}
//void main() {
//    int x;
//    string op;
//    cout << "Enter an integer to push onto the stack: ";
//    cin >> x;
//    push(x);
//    display();
//    cout << "Enter an integer to push onto the stack: ";
//    cin >> x;
//    push(x);
//    display();
//    cout << "Enter an integer to push onto the stack: ";
//    cin >> x;
//    push(x);
//    display();
//    cout << "Enter an operator (+, -, *, /) to perform an operation on the stack: ";
//    cin >> op;
//    push(op);
//    display();
//    cout << "Enter an operator (+, -, *, /) to perform an operation on the stack: ";
//    cin >> op;
//    push(op);
//    display();
//    cout << "Enter an integer to push onto the stack: ";
//    cin >> x;
//    push(x);
//    display();
//    cout << "Enter an integer to push onto the stack: ";
//    cin >> x;
//    push(x);
//    display();
//    cout << "Enter an operator (+, -, *, /) to perform an operation on the stack: ";
//    cin >> op;
//    push(op);
//    display();
//    cout << "Enter an operator (+, -, *, /) to perform an operation on the stack: ";
//    cin >> op;
//    push(op);
//    display();
//}