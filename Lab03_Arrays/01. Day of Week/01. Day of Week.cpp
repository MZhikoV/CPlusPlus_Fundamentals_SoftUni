#include <iostream>

using namespace std;

static const string DOW[] = {
    "Monday",
    "Tuesday",
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday" };

int main()
{
    int n;
    cin >> n;

    if (1 > n || n > 7) {
        cout << "Invalid day!";
    }
    else {
        cout << DOW[n - 1];
    }
    cout << endl;

    return 0;
}