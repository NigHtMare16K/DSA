#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

int maxNumberOfBalloons(string text) {
    int arr[26] = {0};
    
    for(int i=0; i<text.size();i++){
        int a = text[i] - 'a';
        arr[a]++;
    }

    int count = 0;

    while(true){
        if(arr[0]>=1 && arr[1] >=1 && arr['l' - 'a']>=2 && arr['o' - 'a']>=2 && arr['n'-'a']>=1){
            count++;
            arr[0]--;
            arr[1]--;
            arr['l' - 'a'] = arr['l' - 'a'] -2;
            arr['o' - 'a'] = arr['o' - 'a'] -2;
            arr['n'-'a'] = arr['n'-'a'] -1;
        }else{
            break;
        }
    }

    return count;
}

int main(){
    string text = "nlaebolko";
    int a = maxNumberOfBalloons(text);
    cout<<a<<endl;
}