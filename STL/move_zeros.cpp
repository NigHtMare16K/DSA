#include<iostream>
#include<vector>

using namespace std;

// void moveZeros(vector<int>& arr, int n){
//     int count = 0;
//     for(int i=0; i<arr.size(); i++){
//         int e = n-1 - count;
//         if(arr[i] == 0){
//             for(int j = i ; j<e; j++){
//                 arr[j] = arr[j+1];
//             }
//             arr[e] = arr[i];
//             count++;
//         }
//     }
// }

void moveZeros(vector<int>& arr, int n){
    int j = 0;
    for(int i=0; i<arr.size();i++){
        if(arr[i] !=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }   
}

int main(){
    vector<int> arr = {0,1,0,3,12};
    moveZeros(arr,5);

    for(int i =0; i<6; i++){
        cout<<arr[i]<<endl;
    }

}