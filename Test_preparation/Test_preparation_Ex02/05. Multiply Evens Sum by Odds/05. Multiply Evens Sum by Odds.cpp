#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    cin >> a;

    a = abs(a);

    int dig;
    
    int sume = 0, sumo = 0;

    while (a > 0) {
        dig = a % 10;

        if (dig % 2 == 0) {
            sume += dig;
        }
        else {
            sumo += dig;
        }

        a /= 10;
    }

    double result = sume * sumo;

    cout << result << endl;

    return 0;
}
