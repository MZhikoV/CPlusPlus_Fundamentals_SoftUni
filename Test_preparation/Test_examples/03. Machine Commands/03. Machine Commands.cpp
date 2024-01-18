#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    string inp;
    cin >> inp;

    vector <int> vec1;
    vector <int>::iterator it1;

    

    while (inp != "end") {

        stringstream inpS(inp);
        int num;
        if (inpS >> num) {
            vec1.push_back(num);
        }
        else {
            if (inp == "sum") {
                int sum = 0;

                it1 = vec1.end();
                sum += *(it1 - 1);
                vec1.erase(it1 - 1);

                it1 = vec1.end();
                sum += *(it1 - 1);
                vec1.erase(it1 - 1);

                vec1.push_back(sum);
            }
            else if (inp == "subtract") {
                int sub = 0;
                
                it1 = vec1.end();
                sub = *(it1 - 1);
                vec1.erase(it1 - 1);

                it1 = vec1.end();
                sub -= *(it1 - 1);
                vec1.erase(it1 - 1);

                vec1.push_back(sub);
            }
            else if (inp == "concat") {
                string s1,s2,st;

                it1 = vec1.end();
                s1 = to_string(*(it1-1));
                vec1.erase(it1 - 1);

                it1 = vec1.end();
                s2 = to_string(*(it1 - 1));
                vec1.erase(it1 - 1);



                st = s2 + s1;


                vec1.push_back(stoi(st));
            }
            else if (inp == "discard") {
                it1 = vec1.end();
                vec1.erase(it1-1);
            }
        }
        cin >> inp;
    }
    
    for (int n : vec1) {
        cout << n << endl;
    }
   // cout << endl;
    return 0;

}

//s 18.55 e 19.32