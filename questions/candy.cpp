#include <iostream>
#include <vector>
using namespace std;

int candy(vector<int>& ratings) {
        int s  = ratings.size();
        vector<int> candy = {0};
        int i = 0;
        while(i<s){
            int j = i+1;
            if(ratings[i]<ratings[j]){
                candy[i] = candy[i]+1;
                candy[i++] = candy[i]+1;
                i++;
            }else if(rating[i])
        }
}

int main(){
    vector<int> ratingd = {1,0,2};
}