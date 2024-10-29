#include <iostream>
#include <string>
#include <sstream>


int main() {
    std::string inp;
    std::getline(std::cin,inp);
    std::ostringstream num, let, sym;
    for (int i=0; i<inp.length(); i++) {
        if(isalpha(inp[i])) {
            let<<inp[i];
        }
        else if(isdigit(inp[i])) {
            num<<inp[i];
        }
        else {
            sym<<inp[i];
        };
    };
    std::cout<<let.str()<<std::endl<<num.str()<<std::endl<<sym.str()<<std::endl;
    
    system("pause");
    return 0;
}
