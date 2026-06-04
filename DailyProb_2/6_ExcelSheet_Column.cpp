#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// string convertToTitle(int columnNumber) {
//     if(columnNumber<=26){
//         string ch = string(1, 'A' + columnNumber - 1);
//         return ch;
//     }
//     string result;
//     int num = columnNumber;
//     while(num>0){
//         int chnum = num%26;
//         string c = string(1, 'A' + chnum - 1);
//         result.append(c);
//         num = num/26;
//     }  
//     reverse(result.begin(),result.end());
//     return result;    
// }

string convertToTitle(int columnNumber) {
    string result;

    while (columnNumber > 0) {
        columnNumber--;  // Important

        int rem = columnNumber % 26;
        result.push_back('A' + rem);

        columnNumber /= 26;
    }

    reverse(result.begin(), result.end());
    return result;
}
int main(){
    int columnNumber = 52;
    string a = convertToTitle(columnNumber);
    cout<<a<<endl;

    // char ch = 'A' + columnNumber -1;
    // cout<<ch<<endl;

    // string result;
    // string ch = string(1, 'A' + columnNumber - 1);
    // cout<<ch<<endl;
}