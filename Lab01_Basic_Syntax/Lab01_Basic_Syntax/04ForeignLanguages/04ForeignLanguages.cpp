// 04ForeignLanguages.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
    string country;
    cin >> country;

    if (country == "England" || country == "USA") {
        cout << "English" << endl;
    }
    else if (country == "Spain" || country == "Argentina" || country == "Mexico") {
        cout << "Spanish";
    }
    else {
        cout << "unknown" << endl;
    }
    return 0;
}