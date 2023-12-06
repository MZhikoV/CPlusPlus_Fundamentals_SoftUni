#include <iostream>

using namespace std;

const int MAX = 100;

int main()
{
    int n;
    cin >> n;
    
    int arr[MAX] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum+=arr[i];
    }

    int avg = sum / n;

    int avgA[MAX] = {};
    int idx = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] <= avg) {
            avgA[idx] = arr[i];
            idx++;
        }
    }

    int sumE = 0;
    int sumO = 0;

    for (int i = 0; i < idx; i++) {
        if (i %2== 0) {
            sumE += avgA[i];
        }
        else {
            sumO += avgA[i];
        }
    }

    cout << sumE * sumO << endl;

    return 0;

}


//s 18.25 e18.41