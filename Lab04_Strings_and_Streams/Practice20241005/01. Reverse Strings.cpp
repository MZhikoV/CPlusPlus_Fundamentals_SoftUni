#include <iostream>
#include <string>


int main() {
    std::string word;
    std::cin>>word;

    while (word!="end") {
        std::cout<<word+" = ";
        for (int i=word.length()-1; i>=0; i--) {
            std::cout<<word[i];
        };
        std::cout<<std::endl;
        std::cin>>word;
    };


    system("pause");
    return 0;
}