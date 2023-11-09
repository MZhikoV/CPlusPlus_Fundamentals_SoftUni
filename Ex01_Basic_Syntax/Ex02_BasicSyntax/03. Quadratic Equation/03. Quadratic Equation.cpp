#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;

    double D = pow(b, 2) - 4 * a * c;

    if (D < 0) {
        cout << "no roots" << endl;
        return 0;
    }
    else if (D == 0) {
        cout << -1 * b / (2 * a) << endl;
    }
    else {
        cout << ((-1 * b) + sqrt(D)) / (2 * a);
        cout << ' '<<((-1 * b) - sqrt(D)) / (2 * a) << endl;
    }
    return 0;
}
