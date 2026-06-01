#include<iostream>
#include<vector>
using namespace std;

void reverseString(string &str, int i, int j){
    // int i = 0;
    // int j = str.size();
    if(i>=j){
        return;
    }
    swap(str[i],str[j]);
    reverseString(str,i+1,j-1);

}

int main(){
    string str = "hello";
    reverseString(str, 0, str.size() - 1);

    cout << str;
}