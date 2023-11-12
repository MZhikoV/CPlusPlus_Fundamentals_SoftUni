#include <iostream>
#include <cmath>

using namespace std;

void pithaghorT(int x1, int y1, int x2, int y2);

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    pithaghorT(x1, y1, x2, y2);

    return 0;
}


void pithaghorT(int x1, int y1, int x2, int y2) {
    double deltaA = sqrt(pow(x1, 2) + pow(y1, 2));
    double deltaB = sqrt(pow(x2, 2) + pow(y2, 2));
    if (deltaA <= deltaB) {
        cout << '(' << x1 << ", " << y1 << ')' << endl;
    }
    else {
        cout << '(' << x2 << ", " << y2 << ')' << endl;
    }
}