#include <iostream>
using namespace std;

int stack[5];
int top = -1;   

void push(int x) {
    if (top == 4) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stack[top] = x;
        cout << x << " inserted successfully." << endl;
    }
}

void pop() {
    if (top == -1) {
        cout << "Stack Underflow!" << endl;
    } else {
        cout << stack[top] << " removed successfully." << endl;
        top--;
    }
}

void peek() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Top element: " << stack[top] << endl;
    }
}

void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    } else {
        cout << "Stack: ";
        for (int i = top; i >= 0; i--) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n===== STACK MENU =====" << endl;
        cout << "1. Push  2. Pop  3. Peek" << endl;
        cout << "4. Display  5. Exit" << endl;
        cout << "\nChoose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            push(value);
        } else if (choice == 2) {
            pop();
        } else if (choice == 3) {
            peek();
        } else if (choice == 4) {
            display();
        } else if (choice != 5) {
            cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
