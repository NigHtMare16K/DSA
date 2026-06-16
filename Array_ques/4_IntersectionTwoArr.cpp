#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;

    for (int i = 0; i < nums1.size(); i++) {
        int a = nums1[i];

        // Skip if already in answer
        if (find(ans.begin(), ans.end(), a) != ans.end())
            continue;

        // Check if present in nums2
        if (find(nums2.begin(), nums2.end(), a) != nums2.end())
            ans.push_back(a);
    }

    return ans;
}

int main(){
    vector<int> nums1 = { 1,2,2,1}; 
    vector<int> nums2 = {2,2};

    vector<int> a = intersection(nums1,nums2);

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}