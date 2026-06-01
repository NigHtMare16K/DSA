#include<iostream>

using namespace std;

void reverseArray(int arr[], int n , int m){
    int s = m + 1;      // start after position m
    int e = n - 1;      // last index

    while(s < e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
}

int main(){
    int arr[6] = {1,2,3,4,5,6};
    reverseArray(arr,6,3);

    for(int i =0; i<6; i++){
        cout<<arr[i]<<endl;
    }
}
