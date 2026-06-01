#include<iostream>
using namespace std;

int get_Sum(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

int main(){
    int arr[5] = {4,3,6,8,5};

    cout<<"Sum of Elements :"<<get_Sum(arr,5)<<endl;
}