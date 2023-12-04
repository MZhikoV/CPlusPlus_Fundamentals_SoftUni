#include <iostream>

using namespace std;

int poW(int x, int y) {
    int res = 1;

    for (int i = 1; i <= y; i++) {
        res *= x;
    }
    return res;
}
int main()
{
    int n, y;
    cin >> n >> y;

    cout << poW(n, y) << endl;
    return 0;
}
