#include <iostream>
#include <vector>
#include <string>
#include <sstream>

int main() {
    std::string inp;
    std::getline(std::cin,inp);
    std::vector<char> brackets;
    brackets.reserve(inp.length());
    int bb=0, mb=0, sb=0;
    //std::vector<char>::iterator it1;

    bool bbo=false, mbo=false, sbo=false, isValid=true;

    for (int i=0; i<inp.length(); i++) {
        if (inp[i]=='{') {
            if (mb==0 && sb==0) {
                bb++;
                brackets.push_back(inp[i]);
            } else {
                isValid=false;
                break;
            };
        } else if (inp[i]=='[') {
            if (sb==0) {
                mb++;
                brackets.push_back(inp[i]);
            } else {
                isValid=false;
                break;
            };
        } else if (inp[i]=='(') {
            sb++;
            brackets.push_back(inp[i]);
        } else if (inp[i]==')') {
            if (sb==0 || brackets.empty() || (brackets.back()!='(')) {
                isValid=false;
                break;
            } else {
                brackets.pop_back();
                sb--;
            };
        } else if (inp[i]==']') {
            if (mb==0 || brackets.empty() || (brackets.back()!='[')) {
                isValid=false;
                break;
            } else {
                brackets.pop_back();
                mb--;
            };
        } else if (inp[i]=='}') {
            if (bb==0 || brackets.empty() || (brackets.back()!='{')) {
                isValid=false;
                break;
            } else {
                brackets.pop_back();
                bb--;
            };
        };
    };

    if (brackets.empty() && isValid) {
        std::cout<<"valid"<<std::endl;
    } else {
        std::cout<<"invalid"<<std::endl;
    };

    system("pause");
    return 0;
}