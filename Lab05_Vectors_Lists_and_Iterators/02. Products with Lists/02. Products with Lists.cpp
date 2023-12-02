#include <iostream>
#include<string>
#include <list>
#include <sstream>

using namespace std;

int main()
{
    //reading int from the console using getline
    string input;
    getline(cin, input);

    //assigning int value from stream to int
    stringstream inpS(input);
    int num;
    inpS >> num;

    //declaring list
    list<string> products;


    //initializing list from the console
    for (int i = 0; i < num; i++) {
        getline(cin, input);
        products.push_back(input);
    }


    //sorting list using list library build-in fucntion
    products.sort();
    
    //declaring a list iterator
    list<string>::iterator elL;

    //printing results to the console
    int idx = 1;

    for (elL = products.begin(); elL != products.end(); elL++, idx++) {
        cout << idx << '.' << *elL << endl;
    }
    return 0;
}
