// Leetcode - 1732

#include<iostream>
#include<vector>
using namespace std;

int largestAltitude(vector<int>& gain) {
    int highest = 0;
    
    int s = 0;
    for(int i =0;i<gain.size();i++){
        s = s + gain[i];
        if(s>highest){
            highest = s;
        }
    }

    return highest;
}

int main(){
    vector<int> gain = {-4,-3,-2,-1,4,3,2};
    int a = largestAltitude(gain);

    cout<<a<<endl;
}