#include <iostream>
#include <string>


int main() {   
    std::string key,word;
    std::cin>>key>>word;

    for(;;) {
        int currPos=word.find(key);
        if (currPos==std::string::npos) {
            break;
        }
        word=word.erase(currPos,key.length());
    };

    std::cout<<word<<std::endl;

    system("pause");
    return 0;
}