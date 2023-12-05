#include <iostream>

using namespace std;

const int MAX = 100;

void readA(int* arr, int idx) {
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

    int magic;
    cin >> magic;

    for (int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i]+arr[j]==magic) {
                cout << arr[i] << ' ' << arr[j] << endl;
            }
        }
    }
    return 0;
}
