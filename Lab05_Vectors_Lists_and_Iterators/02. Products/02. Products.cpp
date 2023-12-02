#include <iostream>
#include <vector>
#include <sstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    //Reand numbers of input
    int num;
    cin >> num;
    cin.ignore(); //Ignores everything untill the end of the line (incl. endline symbol '\n';

    //declaring vector and reserving containers
    vector <string> products;
    products.reserve(num);

    //reading string vector from the console
    for (int i = 0; i < num; i++) {
        string input;
        getline(cin, input);
        products.push_back(input);
    }

    //sorting vector using the <algoritm> namespace and sort function
    sort(products.begin(), products.end());

    //printing vector to the console using the iterator as an Index before the products
    for (vector <string>::iterator itV = products.begin(); itV != products.end(); itV++) {
        cout << (itV - products.begin() + 1) << '.' << *itV << endl;
    }

    return 0;
}