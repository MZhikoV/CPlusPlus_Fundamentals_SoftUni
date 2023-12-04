#include <iostream>
#include <cmath>

using namespace std;

double dist(int x, int y) {
    return sqrt(pow(x, 2) + pow(y, 2));
}

void print(int x, int y) {
    cout << '(' << x << ", " << y << ')' << endl;
}


int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dist1 = dist(x1, y1);
    int dist2 = dist(x2, y2);

    if (dist1 <= dist2) {
        print(x1, y1);
    }
    else {
        print(x2, y2);
    }
    return 0;
}