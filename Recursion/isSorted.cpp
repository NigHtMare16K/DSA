#include<iostream>
#include<vector>
using namespace std;

bool isSorted(int arr[], int size){
    bool ans;
    if(size==0 || size == 1){
        return true;
    }
    if(arr[0]> arr[1]){
        return false;
    }else{
        ans = isSorted( arr+1, size-1);
    }

    return ans;
}

int main(){
    int arr[5] = {2,5,6,9,10};

    bool ans = isSorted(arr,5);
    if(ans){
        cout<<"Array is sorted"<<endl;
    }else{
        cout<<"Array is not sorted"<<endl;
    }
}