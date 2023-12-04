#include <iostream>

using namespace std;

int area(int x, int y) {
    return x * y;
}

int main()
{
    int a, b;
    cin >> a >> b;

    cout << area(a, b) << endl;

    return 0;
}