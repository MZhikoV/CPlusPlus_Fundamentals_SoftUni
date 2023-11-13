#include <iostream>

using namespace std;

void typeInt(int a, int b);
void typeChar(char a, char b);
void typeString(string a, string b);


int main()
{
    string type;
    cin >> type;

    if (type == "int") {
        int a, b;
        cin >> a >> b;
        typeInt(a, b);
    }
    else if (type == "char") {
        char a, b;
        cin >> a >> b;
        typeChar(a, b);
    }
    else if (type == "string") {
        string a, b;
        cin >> a >> b;
        typeString(a, b);
    }

    return 0;
}

void typeInt(int a, int b) {
    if (a > b) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
}


void typeChar(char a, char b){
    if (a > b) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
}

void typeString(string a, string b) {
    if (a > b) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
}
