#include<iostream>
#include<vector>
using namespace std;

vector<char> compress(vector<char>& chars){
    int count[26] = {0};
    for(int i =0; i< chars.size();i++){
        int index = chars[i] - 'a';
        count[index]++;
    }

    vector<char> result;
    for(int i =0; i<chars.size(); i++){
        int index = chars[i] - 'a';
        int j = 0;
        while(j<26 && index == j){
            if(count[j] == 1){
                result.push_back(chars[i]);
                i++;
            }
            else{
                result.push_back(chars[i]);
                string b = to_string(count[j]);
                for(char c : b){
                   result.push_back(c);
                }
                i = i+count[j];
            }
            j++;
        }
    }
    return result;
}

int main() {
    vector<char> chars = {'a','a','b','b','b','c'};
    vector<char> res = compress(chars);

    for (char c : res) {
        cout << c;
    }
}