#include <iostream>
using namespace std;

bool isSorted(int *arr,int n){
    if(n==0 || n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1,n-1);
    }
}


int main(){

    int arr[5]{
        5,4,3,2,1
    };


int n =5;

bool ans = isSorted(arr,n);
if(ans){
    cout<<"The array given is sorted"<<endl;
}
else{
    cout<<"The array given is not sorted"<<endl;
}
    return 0;
}