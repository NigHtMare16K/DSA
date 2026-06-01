#include<iostream>
#include<vector>
using namespace std;

int lengthOfLastWord(string s){
    int count = 0;
    int i = s.size() - 1;

    // skip trailing spaces
    while(i >= 0 && s[i] == ' '){
        i--;
    }

    // count last word
    while(i >= 0 && s[i] != ' '){
        count++;
        i--;
    }

    return count;
}

int main(){
    string s = " luffy is till joyboy ";
    cout<<lengthOfLastWord(s)<<endl;
}