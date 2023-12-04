#include <iostream>
#include <string>

using namespace std;
double singleP(string& prod) {
    double price = 0;
    if (prod == "coffee") {
        price = 1.5;
    }
    else if (prod == "water") {
        price = 1.0;
    }
    else if (prod == "coke") {
        price = 1.4;
    }
    else if (prod == "snacks") {
        price = 2.0;
    }
    return price;
}

int main()
{
    string prod;
    getline(cin, prod);
    string input;
    getline(cin, input);
    int n = stoi(input);

    double totalPrice = n * singleP(prod);

    cout.setf(ios::fixed);
    cout.precision(2);

    cout << totalPrice << endl;

    return 0;
    
}