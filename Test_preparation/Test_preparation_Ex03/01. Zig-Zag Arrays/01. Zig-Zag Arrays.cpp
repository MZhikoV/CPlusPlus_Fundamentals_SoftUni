#include <iostream>

using namespace std;

const int MAX = 100;

void printA(int arr[], int idx) {
    for (int i = 0; i < idx; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;

    int arr1[MAX] = {};
    int arr2[MAX] = {};

    for (int i = 0; i < n; i ++) {
        if (i % 2 == 0) {
            cin >> arr1[i] >> arr2[i];
        }
        else {
            cin >> arr2[i] >> arr1[i];
        }
    }

    printA(arr1, n);
    printA(arr2, n);

    return 0;
}
