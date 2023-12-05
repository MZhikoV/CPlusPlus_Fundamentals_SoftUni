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

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i] * arr[j] << ' ';
        }
    }

    cout << endl;

    return 0;


}