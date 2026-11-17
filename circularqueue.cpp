
#include <iostream>
using namespace std;

int cq[5];
int front = 0;
int rear = -1;
int total = 0;   

void enqueue(int x) {
    if (total == 5) {
        cout << "Queue Overflow!" << endl;
    } else {
        rear = (rear + 1) % 5;    
        cq[rear] = x;
        total++;
        cout << x << " inserted successfully." << endl;
    }
}

void dequeue() {
    if (total == 0) {
        cout << "Queue Underflow!" << endl;
    } else {
        cout << cq[front] << " removed successfully." << endl;
        front = (front + 1) % 5;  
        total--;
    }
}

void display() {
    if (total == 0) {
        cout << "Queue is empty." << endl;
    } else {
        cout << "Queue: ";
        int i = front;
        for (int count = 0; count < total; count++) {
            cout << cq[i] << " ";
            i = (i + 1) % 5;
        }
        cout << endl;
    }
}

int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();
    enqueue(60);
    enqueue(70);
    display();          

    // ---- Menu ----
    int choice, value;

    do {
        cout << "\n===== CIRCULAR QUEUE MENU =====" << endl;
        cout << "1. Enqueue  2. Dequeue" << endl;
        cout << "3. Display  4. Exit" << endl;
        cout << "\nChoose operation: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter value: ";
            cin >> value;
            enqueue(value);
        } else if (choice == 2) {
            dequeue();
        } else if (choice == 3) {
            display();
        } else if (choice != 4) {
            cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}
