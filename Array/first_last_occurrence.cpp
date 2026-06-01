#include<iostream>
using namespace std;

int first_occ(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        else if (arr[mid])
        {
            /* code */
        }
        
    }
}

int main(){
    int arr[6] = {1,2,2,3,3,4};
}