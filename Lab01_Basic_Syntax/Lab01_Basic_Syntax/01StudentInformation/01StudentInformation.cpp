#include <iostream>
#include <string>

using namespace std;

int main()
{
    string studentName;
    int age;
    double avgGrade;
    cin >> studentName >> age >> avgGrade;

    cout << "Name: " << studentName << ", Age: " << age << ", Grade: ";
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << avgGrade;

}
