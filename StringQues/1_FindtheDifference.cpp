#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

char findTheDifference(string s, string t) {
    char a =0;
    for(int i = 0; i < s.size(); i++) {
        a ^= s[i];
    }
    char b =0;
    for(int i=0;i<t.size();i++){
        b ^=t[i];
    }

    return a^b;

}