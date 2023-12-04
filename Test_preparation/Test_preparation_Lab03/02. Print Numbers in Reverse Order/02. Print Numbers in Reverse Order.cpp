#include <iostream>

using namespace std;

const int MAXNUM = 100;


int main()
{
    int n;
    cin >> n;

    int arr[MAXNUM] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int j = n - 1; j >= 0; j--) {
        cout << arr[j] << ' ';
    }
    cout << endl;

    return 0;
}