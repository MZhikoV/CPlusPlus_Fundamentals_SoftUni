#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 0 || b == 0 || c == 0) {
        cout << '+';
    }
    else {
        if (a > 0) {
            if ((b > 0 && c > 0) || (b < 0 && c < 0)) {
                cout << '+';
            }
            else {
                cout << '-';
            }
        }
        else {
            if ((b < 0 && c < 0) || (b > 0 && c > 0)) {
                cout << '-';
            }
            else {
                cout << '+';
            }
        }
    }
    cout << endl;
    return 0;
}