    #include <iostream>
    #include <cmath>

    using namespace std;

    double dist(double x, double y) {
        return sqrt(pow(x, 2) + pow(y, 2));
    }

    void print(double x, double y) {
        cout << '(' << x << ", " << y << ')' << endl;
    }


    int main()
    {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        double dist1 = dist(x1, y1);
        double dist2 = dist(x2, y2);

        if (dist1 <= dist2) {
            print(x1, y1);
        }
        else {
            print(x2, y2);
        }
        return 0;
    }