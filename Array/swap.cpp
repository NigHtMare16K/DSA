#include <iostream>
using namespace std;

// Changed return type to bool for clarity
// bool is_array_unique(int arr[], int n) {
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] == arr[j]) {
//                 return false; // Found a duplicate, stop immediately
//             }
//         }
//     }
//     return true; // No duplicates found after checking all pairs
// }

void swap_var(int a, int b){
    int temp = a;
    a=b;
    b=temp;
}


void swap_alternate(int arr[], int n){
    for(int i=0; i<n; i=i+2){
        if(i+1 < n){
            swap(arr[i],arr[i+1]); 
        }   
    }
}

void print_array(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
    int arr[7] = {3, 4, 4, 5, 3, 9, 9};
    int brr[6] = {4,3,6,8,9,1};

    // if (is_array_unique(arr, 7)) {
    //     cout << "All elements are unique!" << endl;
    // } else {
    //     cout << "Duplicates found." << endl;
    // }
    // return 0;

    swap_alternate(brr,6);

    // swap_alternate(arr,7);
    print_array(brr,6);
}