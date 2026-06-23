//1833

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxIceCream(vector<int>& costs, int coins) {
    sort(costs.begin(),costs.end());

    int count = 0;
    for(int i =0; i<costs.size();i++){
        coins = coins - costs[i];
        if(coins >= 0){
            count ++;
        }else if(coins < 0){
            break;
        }
    }

    return count;
}

int main(){
    vector<int> costs = {10,6,8,7,7,8};
    int coins = 5;
    int a = maxIceCream(costs,coins);
    cout<<a<<endl;
}