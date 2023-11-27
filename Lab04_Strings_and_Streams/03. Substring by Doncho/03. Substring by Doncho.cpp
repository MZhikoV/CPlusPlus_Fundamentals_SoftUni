#include <iostream>
#include <string>

using namespace std;

int main()
{
    string first, second;

    getline(cin, first);
    getline(cin, second);

    while (true) {
        int posIndx = second.find(first);
        if (posIndx == string::npos) {
            break;
        }

        second.erase(posIndx, first.length());
    }
    cout << second << endl;

    return 0;
}
