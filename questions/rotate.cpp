#include<iostream>
#include<vector>

using namespace std;

// void Rotate(vector<int>& arr, int k){
//     int i = 0;
//     int j = arr.size() - k;

//     while(i<arr.size() && j<arr.size()){
//         swap(arr[i],arr[j]);
//         i++;
//         j++;
//     }

//     int m = i+1;
//     while(i<arr.size()-1 && m<arr.size()){
//         swap(arr[i],arr[m]);
//         i++;
//         m++;
//     }
// }

void Rotate(vector<int>& arr, int k){
    vector<int> temp(arr.size());
    int j = arr.size()-k ;
    int i = 0;
    while(i<arr.size() && j<arr.size()){
        temp[i] = arr[j];
        j++;
        i++;
    }
    int m = arr.size()-k;
    for(int p =0;p<m;p++){
        temp[i] = arr[p];
        i++;
    }

    arr = temp;
}

// class Solution {
// public:
//     void rotate(vector<int>& nums, int k) {
//         vector<int> temp(nums.size());
//         for(int i=0;i<nums.size();i++){
//             temp[(i+k)%nums.size()] = nums[i];
//         }

//         nums = temp;
//     }
// };

int main(){
    vector<int> arr = {1,2,3,4,5,6,7};

    Rotate(arr,3);

    for(int i =0; i<7; i++){
        cout<<arr[i]<<endl;
    }
}