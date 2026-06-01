#include<iostream>
#include<vector>
using namespace std;


int reverse(int x) {
    int reversed = 0;
    int num = x;

    while(num != 0){

        int remainder = num % 10;

        if(reversed > INT_MAX/10 || 
          (reversed == INT_MAX/10 && remainder > 7)){
            return 0;
        }

        if(reversed < INT_MIN/10 || 
          (reversed == INT_MIN/10 && remainder < -8)){
            return 0;
        }

        reversed = reversed * 10 + remainder;

        num = num / 10;
    }

    return reversed;
}

int main(){
    int a = reverse(-123);
    cout<<a<<endl;
}