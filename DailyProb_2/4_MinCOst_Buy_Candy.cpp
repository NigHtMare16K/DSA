#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int minimumCost(vector<int>& cost) {
    sort(cost.begin(),cost.end());
    int sum = 0;
    int i = cost.size()-1;
    int count = 0;
    while(i >= 0){
        if(count == 2){
            i--;
            count = 0;
        }
        else{
            sum += cost[i];
            count++;
            i--;
        }
    }       
    return sum;
}

int main(){
    vector<int> cost = {5,5};
    int a = minimumCost(cost);
    cout<<a<<endl;
}