#include <iostream>
#include <ios>

using namespace std;

double fact(int a) {
    if (a > 1)
        return a * fact(a - 1);
    else
        return 1;
}

int main()
{
    int a, b;
    cin >> a >> b;

    double result = fact(a) / fact(b);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << result << endl;

    return 0;
}