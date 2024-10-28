#include <iostream>
#include<sstream>
#include <string>

int main() {

    std::string inp;
    std::getline(std::cin, inp);
    std::istringstream ost(inp);
    std::ostringstream result;

    while (ost) {
        std::string currWord;
        ost>>currWord;
        int len=currWord.length();
        while(len) {
            result<<currWord;
            len--;
        };
    };
    std::cout<<result.str()<<std::endl;

    system("pause");
    return 0;
}