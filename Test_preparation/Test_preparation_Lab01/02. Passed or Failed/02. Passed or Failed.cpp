#include <iostream>

using namespace std;

int main()
{
    float grade;
    cin >> grade;

    cout << ((grade < 3) ? "Failed!" : "Passed!")<<endl;

    return 0;
}