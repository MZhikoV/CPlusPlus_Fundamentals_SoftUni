#include <iostream>
#include <ios>

using namespace std;

int main()
{
    string name;
    cin >> name;
    int age;
    cin >> age;
    double grade;
    cin >> grade;

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Name: " << name << ", Age: " << age << ", Grade: " << grade << endl;

    return 0;
}