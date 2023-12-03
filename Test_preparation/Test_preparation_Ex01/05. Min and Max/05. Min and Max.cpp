#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int max = INT_MIN;
    int min = INT_MAX;

    int inp;

    for (int i = 0; i < n; i++) {
        cin >> inp;
        if (inp < min) {
            min = inp;
        }
        if (inp > max) {
            max = inp;
        }
    }
    cout << min << ' ' << max << endl;

    return 0;
}