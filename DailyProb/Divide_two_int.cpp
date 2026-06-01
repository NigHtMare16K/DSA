#include<iostream>
#include<vector>
using namespace std;

//Incomplete

int divide(int dividend, int divisor) {
    int i = divisor;
    int count=0;
    int ans;
    while(i<INT_MAX){
        if(dividend - i ==0){
            return 0;
        }else if(dividend - i > 0){
            i = i+divisor;
            count++;
        }else{
            int a = count - 1;
            ans = a;
            return ans;
        }
    }        
}

int main(){

}