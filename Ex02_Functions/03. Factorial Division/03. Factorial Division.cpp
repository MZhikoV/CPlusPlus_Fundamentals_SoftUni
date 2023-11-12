#include <iostream>

using namespace std;

double factNum(int num);

int main()
{
    int num1, num2;
    cin >> num1 >> num2;

    double fact1 = factNum(num1);
    double fact2 = factNum(num2);
    double result = fact1 / fact2;

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << result << endl;

    return 0;
}

double factNum(int num) {
    double result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}
