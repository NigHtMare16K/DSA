#include<iostream>
using namespace std;
#include<vector>

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int size = m+n-1;
    int i = m-1;
    int j =n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[size] = nums1[i];
            i--;
            size--;
        }else{
            nums1[size] = nums2[j];
            j--;
            size--;
        }
    }

        while(j >= 0){
        nums1[size] = nums2[j];
        j--;
        size--;
    }
}

int main() {
    vector<int> nums1 = {1,2,3,0,0,0};
    vector<int> nums2 = {2,5,6};

    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

    cout << "Merged Array: ";

    for(int num : nums1){
        cout << num << " ";
    }

    return 0;
}