#include <iostream>

using namespace std;



int main()
{
    string days[] = { "Monday","Tuesday","Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    int n;
    cin >> n;
    if (n > 0 && n < 8) {
        cout << days[n - 1] << endl;
    }
    else {
        cout << "Invalid day!" << endl;
    }

    return 0;
}