#include<iostream>
#include<vector>
using namespace std;

#include <climits>
#include <algorithm>

int earliestFinishTime(vector<int>& landStartTime,
                       vector<int>& landDuration,
                       vector<int>& waterStartTime,
                       vector<int>& waterDuration) {

    int n = landStartTime.size();
    int m = waterStartTime.size();

    int mn = INT_MAX;

    // land -> water
    for(int i = 0; i < n; i++) {
        int landFinish = landStartTime[i] + landDuration[i];

        for(int j = 0; j < m; j++) {
            int finishTime =
                max(landFinish, waterStartTime[j]) + waterDuration[j];

            mn = min(mn, finishTime);
        }
    }

    // water -> land
    for(int j = 0; j < m; j++) {
        int waterFinish = waterStartTime[j] + waterDuration[j];

        for(int i = 0; i < n; i++) {
            int finishTime =
                max(waterFinish, landStartTime[i]) + landDuration[i];

            mn = min(mn, finishTime);
        }
    }

    return mn;
}

int main(){
    vector<int> landstartTime = {2,8};
    vector<int> landDuration = {4,1};
    vector<int> waterStartTime = {6};
    vector<int> waterDuration = {3};

    int a = earliestFinishTime(landstartTime,landDuration,waterStartTime,waterDuration);
    cout<<a<<endl;
}