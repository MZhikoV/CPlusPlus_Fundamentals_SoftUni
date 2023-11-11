#include <iostream>

using namespace std;

int findSmallest(int, int, int);

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << findSmallest(a, b, c) << endl;

    return 0;
}

int findSmallest(int n1, int n2, int n3) {
    int min = n1;
    if (min > n2) min = n2;
    if (min > n3) min = n3;

    return min;
}
