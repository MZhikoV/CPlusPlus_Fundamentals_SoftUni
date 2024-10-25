#include <iostream>

double summ(double a, double b) {
    return a+b;
}

int summ(int a, int b) {
    return a+b;
}

int main() {
    double c=1.5;
    double d=3;
    std::cout<<summ(1,3)<<std::endl;
    std::cout<<summ(c,d)<<std::endl;
    system("pause");
    return 0;
}