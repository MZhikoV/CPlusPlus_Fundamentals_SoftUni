#include <iostream>

using namespace std;

const int MAX = 100;

void readA(int arr[], int idx) {
    for (int i = 0; i < idx; i++) {
        cin >> arr[i];
    }
}

int main()
{
    int n;
    cin >> n;

    int arr[MAX] = {};

    readA(arr, n);
    bool isBig = true;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                isBig = false;
            }
        }
        if (isBig) {
            cout << arr[i] << ' ';
        }
        isBig = true;
    }

    cout << endl;
    return 0;
}
