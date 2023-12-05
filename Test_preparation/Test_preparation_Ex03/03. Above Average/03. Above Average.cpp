#include <iostream>

using namespace std;

const int MAX = 100;

void readA(int arr[], int idx) {
    for (int i = 0; i < idx; i++) {
        cin >> arr[i];
    }
}

int avgA(int arr[], int idx) {
    int avg = 0;
    int sum = 0;
    for (int i = 0; i < idx; i++) {
        sum+=arr[i];
    }
    avg = sum / idx;
    return avg;
}

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

    int arr[MAX] = {};

    readA(arr, n);

    int arrR[MAX] = {};

    int avg = avgA(arr, n);

    int idx = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] >= avg) {
            arrR[idx] = arr[i];
            idx++;
        }
    }

    if (idx != 0) {
        printA(arrR, idx);
    }

    return 0;
}