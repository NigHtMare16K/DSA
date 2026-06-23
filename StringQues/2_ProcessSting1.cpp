//3612
#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

char processStr(string s, long long k) {
    string ans;

    for(int i = 0; i < s.size(); i++) {

        if(s[i] == '*') {
            if(!ans.empty()) {
                ans.pop_back();
            }
        }
        else if(s[i] == '#') {
            ans += ans;
        }
        else if(s[i] == '%') {
            reverse(ans.begin(), ans.end());
        }
        else {
            ans.push_back(s[i]);
        }
    }

    char b ;
    if(ans.size() > k){
        b = ans[k];
    }else{
        b = '.';
    }

    return b;
}

int main(){
    string s = "cd%#*#";

    char ans = processStr(s,5);
    
    // for(int i=0;i<ans.size();i++){
    //     cout<<ans[i]<<" ";
    // }

    cout<<ans<<endl;
}