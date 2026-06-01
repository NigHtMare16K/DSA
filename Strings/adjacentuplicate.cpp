#include<iostream>
using namespace std;

string removeDuplicate(string s ){
    string a ;
    int i = 0;
    while(i<s.length()-1){
        if(s[i] == s[i+1]){
            s.erase(i, 2);
            i = 0;
        }
        else{
            i++;
        }
    }
    return s;
}

int main(){
    string s = "aabccd";
    string p = "accaz";

    cout<<removeDuplicate(s);
    cout<<removeDuplicate(p);
}