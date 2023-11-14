#include <iostream>

using namespace std;

int findSmallest(int n1, int n2);
int findSmallest(int n1, int n2, int n3);

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << findSmallest(a, b, c) << endl;

    return 0;
}

int findSmallest(int n1, int n2) {
    if (n1 < n2) {
        return n1;
    }
    else {
        return n2;
    }
}

int findSmallest(int n1, int n2, int n3) {
    return findSmallest(n1, findSmallest(n2, n3));
}
