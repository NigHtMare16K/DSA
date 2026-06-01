#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int start = 0;
    int end =n-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

void print_arr(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int arr[6] = {1,4,0,5,-2,15};
    int brr[5] = {2,6,3,9,4};

    reverse(arr,6);
    reverse(brr,5);

    print_arr(arr,6);
    cout<<endl;
    print_arr(brr,5);
}