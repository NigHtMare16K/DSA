#include<iostream>
#include<vector>
using namespace std;

int getSum(int arr[], int size){
    if(size==0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }
    int sum = 0;
    sum = sum + arr[0] + getSum(arr+1,size-1);
    return sum;
}

int main(){
    int arr[5] = {2,4,6,9,1};
    int arr1[1] = {2};

    int sum = getSum(arr,  5);

    cout<<"Sum is : "<<sum<<endl;
}