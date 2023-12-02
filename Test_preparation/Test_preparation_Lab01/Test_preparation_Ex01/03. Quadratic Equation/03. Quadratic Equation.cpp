#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double insight = pow(b, 2) - 4 * a * c;
    double D;

    if (insight >=0) {
        D = sqrt(insight);
    }
    else {
        cout << "no roots";
        return 0;
    }
    if (D == 0) {
        cout << -b / (2 * a);
    }
    else {
        cout << (-b + D) / (2 * a) << ' ' << (-b - D) / (2 * a);
    }
    cout << endl;

    return 0;
}
