#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int checkDigits = num;
    int digits = 0;
    int sum = 0, factor;

    while (checkDigits > 0) {
        digits = checkDigits % 10;
        checkDigits /= 10;
        factor = 1;
        for (int i = 1; i <= digits; i++) {
            factor *= i;
        }
        sum += factor;
    }

    if (sum == num) {
        cout << "yes" << endl;
    }
    else {
        cout << "no" << endl;
    }

    return 0;
}