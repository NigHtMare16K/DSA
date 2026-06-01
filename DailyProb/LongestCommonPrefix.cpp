#include<iostream>
#include<vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    
    string s = strs[0];
    int p = s.size();

    for(int j = 1; j < strs.size(); j++) {

        string a = strs[j];
        int k = 0;

        while(k < p && k < a.size() && a[k] == s[k]) {
            k++;
        }

        p = k;

        if(p == 0) {
            return "";
        }
    }

    string ans;

    for(int i = 0; i < p; i++) {
        ans.push_back(s[i]);
    }

    return ans;
}  