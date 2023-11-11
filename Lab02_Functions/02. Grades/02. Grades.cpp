#include <iostream>

using namespace std;

void printGrade(double);

int main()
{
    double grade;
    cin>>grade;

    printGrade(grade);

    return 0;
}


void printGrade(double a) {
    string status;
    if (a < 3) status = "Fail";
    else if (a < 3.5) status = "Poor";
    else if (a < 4.5) status = "Good";
    else if (a < 5.5) status = "Very good";
    else status = "Excellent";

    cout << status << endl;
}