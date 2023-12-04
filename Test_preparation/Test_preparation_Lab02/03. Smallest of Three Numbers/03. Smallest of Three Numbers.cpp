#include <iostream>

using namespace std;

int findSmallest(int x, int y, int z) {
    int min = x;
    if (min > y) {
        min = y;
    }
    if (min > z) {
        min = z;
    }
    return min;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << findSmallest(a, b, c) << endl;

    return 0;
}