#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

//defining and initialising a function for reading an int into list
void readIntVectro(stringstream &inp, vector<int> &resV) {
    int i;
    while (inp >> i) {
        resV.push_back(i);
    }
}

int main()
{
    //reading int values from a single line
    string input;
    getline(cin, input);

    //declaring and initialising stream for input
    stringstream inpST(input);

    //declaring a list for the input int
    vector<int> numbersV;

    //initialising the list with function
    readIntVectro(inpST, numbersV);
    
    //declaring working interval
    int from = 0, to = numbersV.size() - 1;

    //declaring a list for the result
    list <int> result;

    //finding the requested lements
    for (; from <= to; from++, to--) {
        if (from == to) {
            result.push_back(numbersV[from]);
        }
        else {
            result.push_back(numbersV[from] + numbersV[to]);
        }
    }

    //printing the list with results
    list <int>::iterator elL = result.begin();
    for (elL; elL != result.end(); elL++) {
        cout << *elL << ' ';
    }

    cout << endl;
    
    return 0;
}