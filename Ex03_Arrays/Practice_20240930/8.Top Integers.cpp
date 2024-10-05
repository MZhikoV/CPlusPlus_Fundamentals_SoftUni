#include <iostream>

void checkArr(const int arr[],int idx, int n) {
    //int tmp=arr[idx];
    bool isTop=true;
    for (int i=idx+1; i<n; i++) {
        if (arr[idx]<=arr[i]) {
            isTop=false;
            break;
        };
    };
    if (isTop) {
        std::cout<<arr[idx]<<' ';
    };
}

int main() {

    int n;
    std::cin>>n;

    int * arr=(int*)malloc(n*sizeof(int));
    if (!arr) {
        std::cout<<"Memory error!"<<std::endl;
    }

    for (int i=0; i<n; i++) {
        std::cin>>arr[i];
    };

    for (int i=0; i<n; i++) {
        checkArr(arr,i,n);
    };

    free(arr);

   system("pause");
    return 0;
}