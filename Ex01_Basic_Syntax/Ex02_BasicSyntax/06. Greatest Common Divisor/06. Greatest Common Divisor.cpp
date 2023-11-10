#include <iostream>

using namespace std;

int main()
{
    int num1, num2, divRes,GCD;
    cin >> num1 >> num2;
    if (num1 == num2) GCD = 1;
    else {

        while (true) {
            divRes = num1 % num2;
            num1 = num2;
            num2 = divRes;
            if (num1 == 0) {
                GCD = num2;
                break;
            }
            if (num2 == 0) {
                GCD = num1;
                break;
            }
        }
    }
    cout << GCD << endl;

    return 0;
}
