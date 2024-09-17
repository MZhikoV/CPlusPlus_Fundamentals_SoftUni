#include <iostream>

void add(int a, int b) {
    std::cout << a + b << std::endl;
}

void sub(int a, int b) {
    std::cout << a - b << std::endl;
}

void mult(int a, int b) {
    std::cout << a * b << std::endl;
}

void divi(int a, int b) {
    std::cout <<(double)((double)a / b) << std::endl;
}


int main()
{
    int a, b;
    char oper;
    std::cin >> a >> b >> oper;

    switch (oper) {
    case '+': add(a, b); break;
    case '-': sub(a, b); break;
    case '*': mult(a, b); break;
    case '/': divi(a, b); break;
    }
    return 0;
}
