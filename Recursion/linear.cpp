#include<iostream>
#include<vector>
using namespace std;

bool isFound(int arr[], int size, int key){
    if(size==0){
        return false;
    }
    // if(size==1 && arr[0] == key){
    //     return true;
    // }
    // if(size==1 && arr[0] != key){
    //     return false;
    // }
    if(arr[0] == key){
        return true;
    }else{
        bool ans = isFound(arr+1,size-1,key);
        return ans;
    }
}


int main(){
    int arr[5] = {2,4,6,9,1};
    int arr1[1] = {4};
    bool ans = isFound(arr,5, 4);
    if(ans){
        cout<<"Found"<<endl;
    }else{
        cout<<"Not Found"<<endl;
    }
}