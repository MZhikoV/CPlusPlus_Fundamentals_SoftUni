#include <iostream>

using namespace std;

const int MAX = 100;


int main()
{
    int n;
    cin >> n;

    int arr[MAX] = {};

    int sume = 0, sumo = 0;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];

        if (arr[i] % 2 == 0) {
            sume += arr[i];
        }
        else {
            sumo += arr[i];
        }
    }
    cout << sume - sumo << endl;
    return 0;
}
