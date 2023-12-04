#include <iostream>

using namespace std;

const int MAX = 100;

int main()
{
    int n;
    cin >> n;

    string arr[MAX] = {};
    string arrR[MAX] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int k = 0;
    for (int j = n-1; j >=0; j--) {
        arrR[k]=arr[j];
        k++;
    }

    for (int i = 0; i < n; i++) {
        cout<< arrR[i]<<' ';
    }
    cout << endl;
    return 0;
}