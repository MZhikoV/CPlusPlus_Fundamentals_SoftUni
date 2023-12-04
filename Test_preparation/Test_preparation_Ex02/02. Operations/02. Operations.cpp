#include <iostream>

using namespace std;

void add(int a, int b) {
    cout<< a + b;
}

void sub(int a, int b) {
    cout << a - b;
}

void mult(int a, int b) {
    cout << a * b;
}

void divv(int a, int b) {
    cout << a / b;
}

int main()
{
    int a, b;
    cin >> a >> b;

    char c;
    cin >> c;

    switch (c) {
    case '+': add(a, b); break;
    case '-': sub(a, b); break;
    case '*': mult(a, b); break;
    case '/': divv(a, b); break;
    default: break;
    }
    return 0;
}
