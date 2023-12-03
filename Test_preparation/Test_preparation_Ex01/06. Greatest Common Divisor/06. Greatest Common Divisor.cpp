#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    while (b != 0) {
        int c = a % b;
        int d = a / b;
        a=(a-c)/d; b = c;
    }
    cout << a << endl;
    return 0;
}
