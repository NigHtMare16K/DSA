#include<iostream>
using namespace std;

// string reverseWords(string s){
//     string ans;
//     int i = s.size() - 1;   // fix: last valid index

//     while(i >= 0){

//         if(s[i] == ' ' && i > 0 && s[i-1] == ' '){  // fix: comparison + logical AND
//             i--;
//         }

//         else if(s[i] == ' ' && i > 0 && s[i-1] != ' '){  // fix: comparison + logical AND
//             int j = i + 1;

//             while(j < s.size() && s[j] != ' '){   // fix: boundary check
//                 ans.push_back(s[j]);
//                 j++;
//             }

//             ans.push_back(' ');
//             i--;
//         }
//         else{
//             i--;
//         }
//     }

//     // add first word (since loop misses it)
//     int j = 0;
//     while(j < s.size() && s[j] != ' '){
//         ans.push_back(s[j]);
//         j++;
//     }

//     return ans;
// }


string reverseWords(string s){
    string ans;
    int i = s.size() - 1;

    while(i >= 0){

        while(i >= 0 && s[i] == ' ') // skip spaces
            i--;

        if(i < 0) break;

        int j = i;

        while(j >= 0 && s[j] != ' ') // find start of word
            j--;

        for(int k = j+1; k <= i; k++)
            ans.push_back(s[k]);

        ans.push_back(' ');

        i = j - 1;
    }

    if(ans.size() > 0)
        ans.pop_back(); // remove last space

    return ans;
}


int main(){
    string s = "the sky is blue";
    string k = " hello world ";
    cout<<reverseWords(s)<<endl;
    cout<<reverseWords(k)<<endl;
}