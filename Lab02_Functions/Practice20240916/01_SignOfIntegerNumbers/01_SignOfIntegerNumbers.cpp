#include <iostream>

double distFromZero(int a, int b) {
    return (a * a + b * b);
};

void print(int a, int b) {
    std::cout << '(' << a << ", " << b << ')';
}

void compare(int a1, int b1, int a2, int b2) {
    (distFromZero(a1, b1) > distFromZero(a2, b2)) ? print(a2, b2) : print(a1, b1);
}


int main()
{
    int x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    compare(x1, y1, x2, y2);

    return 0;
}
