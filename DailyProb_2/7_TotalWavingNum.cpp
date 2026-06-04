#include<iostream>
#include<vector>
using namespace std;

int totalWaviness(int num1, int num2) {
    int i = num1;
    
    int wav = 0;
    for(i;i<=num2;i++){
        string s = to_string(i);
        int j = 1;
        while(j<s.size()-1){
            if(s[j]>s[j-1] && s[j]>s[j+1]){
                wav++;
            }else if(s[j]<s[j-1] && s[j]<s[j+1]){
                wav++;
            }
            j++;
        }
    }

    return wav;
}

int main(){
    int num1 = 4848;
    int num2 = 4848;
    int a = totalWaviness(num1,num2);

    cout<<a<<endl;
}