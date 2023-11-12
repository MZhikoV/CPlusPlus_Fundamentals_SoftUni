#include <iostream>

using namespace std;

int add(int x, int y);
int ext(int x, int y);
int mult(int x, int y);
int divi(int x, int y);


int main()
{
    int a, b;
    cin >> a >> b;
    char operation;
    cin >> operation;

    int result = 0;

    if (operation == '+') {
        result = add(a, b);
    }
    else if (operation == '-') {
        result = ext(a, b);
    }
    else if (operation == '*') {
        result = mult(a, b);
    }
    else if (operation == '/') {
        result = divi(a, b);
    }

    cout << result << endl;

    return 0;
}


int add(int x, int y) {
    int result = x + y;
    return result;
}

int ext(int x, int y) {
    int result = x - y;
    return result;
}

int mult(int x, int y) {
    int result = x * y;
    return result;
}

int divi(int x, int y) {
    int result = x / y;
    return result;
}