#include <iostream>

using namespace std;

int vowelCount(string a);

int main()
{
    string input;
    cin >> input;

    int result = vowelCount(input);

    cout << result << endl;

    return 0;
}


int vowelCount(string a) {
    int tectLen = a.length();
    int count = 0;
    for (int i = 0; i < tectLen; i++) {
        if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' || a[i] == 'i'
            || a[i] == 'I' || a[i] == 'o' || a[i] == 'O' || a[i] == 'u' || a[i] == 'U'
            || a[i] == 'y' || a[i] == 'Y') {
            count++;
        }
    }
    return count;
}
