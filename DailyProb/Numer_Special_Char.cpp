#include<iostream>
#include<vector>
#include <cctype>
using namespace std;

int numberOfSpecialChars(string word) {
    int count = 0;
    int i = 0;
    while(i<word.size()){
        int j = i+1;
        while(j<word.size()){
            if(islower(word[i])){
                if(islower(word[j])){
                    j++;
                }else{
                    char b = tolower(word[j]);
                    if(word[i] == b){
                        count++;
                        i++;
                    }
                }
            }else{
                if(isupper(word[j])){
                    j++;
                }else{
                    char c = toupper(word[j]);
                    if(word[i] == c){
                        count++;
                        i++;
                    }
                }
            }
        }
        i++;
    }        
    return count;
}

int main(){
    string word = "aaAbcBC";
    cout<<numberOfSpecialChars(word)<<endl;
}