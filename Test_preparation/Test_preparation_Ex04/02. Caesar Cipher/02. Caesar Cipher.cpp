#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string input;
    getline(cin, input);

    stringstream result;
  
    for (char c : input) {
        result << (char)(c + 3);
    }

    cout << result.str() << endl;
    return 0;
}
