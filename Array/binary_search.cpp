#include<iostream>
using namespace std;

int binary_search(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid]==key){
            return mid;
            break;
        }
        if(arr[mid]>key){
            e = mid-1;
        }else
        {
            s= mid+1;
        }

        mid = s + (e-s)/2;
        
    }

    return -1;
}

int main(){
    int even[6] = {2,4,7,8,9,12};

    int index = binary_search(even,6,12);
    cout<<index;
}