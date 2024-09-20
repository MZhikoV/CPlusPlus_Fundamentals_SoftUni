#include <iostream>
#include <cctype>

const int maxSize = 100;

int countV(const char* arr) {
    int result = 0;
    int i = 0;
    while (arr[i] != '\0') {
        switch (tolower(arr[i])) {
        case 'a':
        case 'o':
        case 'e':
        case 'i':
        case 'u':
        case 'y': { result++; }; break;
        };
        i++;
    };
    return result;
};

int main()
{
    char inp[100];

    std::cin >> inp;

    std::cout << countV(inp) << std::endl;

    return 0;
}