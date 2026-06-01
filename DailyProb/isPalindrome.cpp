#include<iostream>
#include<vector>
#include <cctype>
using namespace std;

bool isPalindrome(int x) {
    int num = x;
    int reversed = 0;
    if(num<0){
        return false;
    }else{
        while(num>0){
            int remainder =num%10;
            if(reversed > (INT_MAX - remainder) / 10){
                return false;
            }
            reversed = reversed*10 + remainder;
            num = num/10;
        }
    }
    if(reversed==x){
        return true;
    }else{
        return false;
    }
}

int main(){
    if(isPalindrome(-121)){
        cout<<"Is Palindrome"<<endl;
    }else{
        cout<<"Not a palindrome"<<endl;
    }
}