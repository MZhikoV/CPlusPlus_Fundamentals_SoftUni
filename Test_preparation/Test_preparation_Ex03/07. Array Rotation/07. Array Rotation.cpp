#include <iostream>

using namespace std;

const int MAX = 100;

void readA(int *arr, int idx) {
    for (int i = 0; i < idx; i++) {
        cin >> arr[i];
    }
}

void rotA(int* arr1, int idx) {
    int temp = arr1[0];
    for (int i = 0; i < idx - 1; i++) {
        arr1[i] = arr1[i + 1];
    }
    arr1[idx - 1] = temp;
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

    int rot;
    cin >> rot;

    while (rot > 0) {
        rotA(arr, n);
        rot--;
    }

    printA(arr, n);

    return 0;
}