#include <iostream>
#include <cmath>

using namespace std;

void pithaghorT(double x1, double y1, double x2, double y2);

int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    pithaghorT(x1, y1, x2, y2);

    return 0;
}


void pithaghorT(double x1, double y1, double x2, double y2) {
    double deltaA = sqrt(pow(x1, 2) + pow(y1, 2));
    double deltaB = sqrt(pow(x2, 2) + pow(y2, 2));
    if (deltaA <= deltaB) {
        cout << "(" << x1 << ", " << y1 << ")" << endl;
    }
    else {
        cout << "(" << x2 << ", " << y2 << ")" << endl;
    }
}