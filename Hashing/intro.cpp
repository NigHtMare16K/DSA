#include<iostream>
#include<vector>
#include <map>
#include <unordered_map>
using namespace std;

int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>> arr[i];
    }

    // Hashing
    // int hash[13] = {0};
    // for(int i=0;i<n;i++){
    //     hash[arr[i]] += 1;
    // }

    unordered_map<int, int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }

    int q;
    cin>>q;

    // cout<<hash[q] <<endl;
    cout<<mpp[q]<<endl;

}