#include <iostream>
#include <list>
#include <sstream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

//function for writing the values to a list/vector
void vectorReadInd(stringstream& str1, list<int>& inp1) {
    int i;
    while (str1 >> i) {
        inp1.push_back(i);
    }
}

//function for reading values from the console
void readConsoleInput(list<int>& inpV) {
    string input;
    getline(cin, input);
    stringstream infostr(input);
    vectorReadInd(infostr, inpV);
}

//function to add element at the end of a list/vector
void doAdd(list<int>& inp, int a) {
    inp.push_back(a);
}

//function to find and remove element from list/vector
void doRemove(list<int>& inp, int a) {
    for (list<int>::iterator it1 = inp.begin(); it1 != inp.end(); it1++) {
        if (*it1 == a) {
            inp.erase(it1);
            return;
        }
    }
}

//return iterator position according to index
list<int>::iterator goToListIndex(list<int>& inp, int index) {
    list<int>::iterator itF = inp.begin();
    for (; itF != inp.end() && index != 0; itF++, index--);

    return itF;
}


//function to remove element at specific location from list/vector
void doRemoveAt(list<int>& inp, int a) {
    list<int>::iterator it1 = goToListIndex(inp, a);

    if (it1 != inp.end()) {
        inp.erase(it1);
    }
}

//function to insert element at specific location from list/vector
void doInsertAt(list<int>& inp, int a, int b) {
    list<int>::iterator it1 = goToListIndex(inp, b);
    
        inp.insert(it1,a);
}

int main()
{
    list<int> initL;

    readConsoleInput(initL);

    string action;

    while (cin >> action) {

        if (action == "end") {
            break;
        }

        int num;
        cin >> num;

        if (action == "Add") {
            doAdd(initL, num);
        }
        else if (action == "Remove") {
            doRemove(initL, num);
        }
        else if (action == "RemoveAt") {
            doRemoveAt(initL, num);
        }
        else {
            int idx;
            cin >> idx;
            doInsertAt(initL, num, idx);
        }
    }

    for (int c : initL) {
        cout << c << ' ';
    }

    cout << endl;

    return 0;
}


//s 16.00