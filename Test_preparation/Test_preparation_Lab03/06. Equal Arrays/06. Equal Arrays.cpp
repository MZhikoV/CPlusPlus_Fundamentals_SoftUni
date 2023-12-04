#include <iostream>

using namespace std;

const int MAX = 100;

void readArr(int arr[], int idx) {
    for (int i = 0; i < idx; i++) {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int arr1[MAX] = {};
    int arr2[MAX] = {};

    readArr(arr1, n);
    readArr(arr2, n);

    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            cout << "Arrays are not identical. Found difference at " << i << " index." << endl;
            return 1;
        }
        sum += arr1[i];
    }
    cout << "Arrays are identical. Sum: " << sum << endl;
    return 0;
}
