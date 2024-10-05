#include <iostream>

void countSeq(const int arr[], const int n, int &idx, int &count) {

    int curr=1;
 
    for (int i=1; i<n; i++) {
        if (arr[i-1]==arr[i]) {
            curr++;
            if (i==n-1) {
                if (count<=curr) {
                    count=curr;
                    idx=i;
                };
            };
        }
        else {
            if (count<=curr) {
                count=curr;
                idx=i-1;
            };
            curr=1;
        };
    };
};


int main() {

    int cols;
    std::cin>>cols;

    if (cols<=0) {
        return 0;
    };

    int *arr=new int[cols];

    for (int i=0; i<cols; i++) {
        std::cin>>arr[i];
    };

    int idx=0; int count=0;

    countSeq(arr,cols,idx,count);

    //std::cout<<countSeq(arr,cols)<<std::endl;

    bool isFirst=true;
    for (int i=0; i<count; i++) {
        if (!isFirst) {
            std::cout<<' ';
        }
        else {
            isFirst=false;
        };

        std::cout<<arr[idx-i];
    };

    std::cout<<std::endl;

    delete[] arr;

    system ("pause");
    return 0;
}