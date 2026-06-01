#include <iostream>
using namespace std;

bool unique(int arr[], int n){
    int brr[1000];

    for(int i=0; i<n; i++){
        int count =0;
        for(int j=i+1; j<n;j++){
            if(arr[i] == arr[j]){
                count++;
            }
            brr[i] = count;
        }
    }

    for(int i=0; i<n; i++){
        
    }
}

int main(){
    int arr[6] = {4,3,3,4,4,1};
}