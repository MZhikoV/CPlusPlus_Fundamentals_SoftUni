#include <iostream>

using namespace std;

const int MAX = 100;

int main()
{
    int n;
    cin >> n;

    int arr[MAX] = {};

    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            sum += arr[i];
        }
    }

    cout << sum << endl;

    return 0;
}