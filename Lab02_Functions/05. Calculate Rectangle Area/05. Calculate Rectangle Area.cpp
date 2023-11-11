#include <iostream>

using namespace std;

int recArea(int a, int b);

int main()
{
    int width, height;
    cin >> width >> height;

    int area=recArea(width, height);

    cout << area << endl;

    return 0;
}

int recArea(int a, int b) {
    int recArea = a * b;
    return recArea;
}
