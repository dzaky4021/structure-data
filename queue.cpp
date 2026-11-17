
#include <iostream>
using namespace std;

int queue[5];
int front = 0;
int rear = -1;   

void enqueue(int x) {
    if (rear == 4) {
        cout << "Queue Overflow!" << endl;
    } else {
        rear++;
        queue[rear] = x;
        cout << x << " inserted successfully." << endl;
    }
}

void dequeue() {
    if (front > rear) {
        cout << "Queue Underflow!" << endl;
    } else {
        cout << queue[front] << " removed successfully." << endl;
        front++;
    }
}

void showFront() {
    if (front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Front element: " << queue[front] << endl;
    }
}

void display() {
    if (front > rear) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue: ";
        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "\n===== QUEUE MENU =====" << endl;
        cout << "1. Enqueue  2. Dequeue" << endl;
        cout << "3. Front  4. Display  5. Exit" << endl;
        cout << "\nChoose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            showFront();
        } else if (choice == 4) {
            display();
        } else if (choice != 5) {
            cout << "Invalid choice." << endl;
        }
    } while (choice != 5);

    return 0;
}
