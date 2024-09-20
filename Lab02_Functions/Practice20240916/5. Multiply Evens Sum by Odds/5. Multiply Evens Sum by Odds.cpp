#include <iostream>

void calc(int a, int& b) {
    static int eveN = 0;
    static int oddN = 0;

    if (a % 2 == 0) {
        eveN += a;
    }
    else {
        oddN += a;
    };
    b = eveN * oddN;
}

int main()
{
    int inp;
    std::cin >> inp;

    int result = 0;

    while (inp != 0) {
        int tmp = inp % 10;
        calc(tmp, result);
        inp /= 10;
    };

    std::cout << result << std::endl;

    return 0;
}
