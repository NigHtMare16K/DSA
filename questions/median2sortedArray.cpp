#include<iostream>
#include<vector>

using namespace std;

double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<int> m;
    int a = nums1.size();
    int b = nums2.size();

    int i = 0, j = 0;

    while(i < a && j < b){
        if(nums1[i] < nums2[j]){
            m.push_back(nums1[i]);
            i++;
        } else {
            m.push_back(nums2[j]);
            j++;
        }
    }

    while(i < a){
        m.push_back(nums1[i]);
        i++;
    }

    while(j < b){
        m.push_back(nums2[j]);
        j++;
    }

    int s = a + b;
    double median;

    if(s % 2 != 0){
        int k = s / 2;
        median = m[k];
    } else {
        int p = s / 2;
        median = (m[p-1] + m[p]) / 2.0;
    }

    return median;
}

int main(){
    
}