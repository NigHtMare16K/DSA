#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2){
    int n = nums1.size();
    int m = nums2.size();

    for(int i = 0; i<m; i++){
        nums1.push_back(nums2[i]);
    }

    sort(nums1.begin(), nums1.end());

    double median ;
    int s = n+m;
    int mid = s/2;
    if(s%2==0){
        median = (nums1[mid-1] + nums1[mid])/2.0;
    }
    else{
        median = nums1[mid];
    }

    return median;
}

int main(){
    vector<int> nums1 = {1, 3};
    vector<int> nums2 = {2,5,9,14};

    double result = findMedianSortedArrays(nums1, nums2);

    cout << "Median = " << result << endl;

    return 0;
}