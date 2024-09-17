#include <iostream>

double distFromZero(double a, double b) {
    return (a * a + b * b);
};

void print(double a, double b) {
    std::cout << '(' << a << ", " << b << ')';
}

void compare(double a1, double b1, double a2, double b2) {
    (distFromZero(a1, b1) > distFromZero(a2, b2)) ? print(a2, b2) : print(a1, b1);
}


int main()
{
    double x1, y1, x2, y2;
    std::cin >> x1 >> y1 >> x2 >> y2;

    compare(x1, y1, x2, y2);

    return 0;
}
