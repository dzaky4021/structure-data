#include <iostream>
using namespace std;

char stack[100];
int top = -1;

void push(char c) {
    if (top == 99) {
        cout << "Stack Overflow!" << endl;
    } else {
        top++;
        stack[top] = c;
    }
}

char pop() {
    char c = stack[top];
    top--;
    return c;
}

int main() {
    char word[100];
    char reversed[100];
    int i, n = 0;

    cout << "Enter a word: ";
    cin >> word;

  for (i = 0; word[i] != '\0'; i++) {
        push(word[i]);
        n++;
    }

    for (i = 0; i < n; i++) {
        reversed[i] = pop();
    }
    reversed[n] = '\0';

    cout << "\nOriginal word: " << word << endl;
    cout << "Reversed word: " << reversed << endl;

    return 0;
}
