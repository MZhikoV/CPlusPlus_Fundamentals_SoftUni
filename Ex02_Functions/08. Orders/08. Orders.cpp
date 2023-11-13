#include <iostream>

using namespace std;

void price(string a, int b);

int main()
{
    string product;
    int quantity;
    cin >> product >> quantity;

    price(product, quantity);

    return 0;
}

void price(string a, int b) {
    double price = 0;
    if (a == "coffee") {
        price = b * 1.5;
    }
    else if (a=="water") {
        price = b * 1.0;
    }
    else if (a == "coke") {
        price = b * 1.40;
    }
    else if (a == "snacks") {
        price = b * 2.0;
    }

    cout.setf(ios::fixed);
    cout.precision(2);
    cout << price << endl;
}