#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// string mapWordWeights(vector<string>& words, vector<int>& weights) {
//     vector<int> wor;
//     for(int i =0; i< words.size();i++){
//         string a = words[i];
//         int sum = 0;
//         for(int j=0;j<a.size();j++){
//             int c = a[j] - 'a';
//             sum = sum + weights[c];
//         }
//         wor.push_back(sum);
//     }        
// }

string mapWordWeight(vector<string>& words, vector<int>& weights) {
    vector<int> wor;
    string ans;
    for(int i =0; i< words.size();i++){
        string a = words[i];
        int sum = 0;
        for(int j=0;j<a.size();j++){
            int c = a[j] - 'a';
            sum = sum + weights[c];
        }
        wor.push_back(sum);
    }      
    
    for(int i=0; i<wor.size();i++){
        int s = wor[i] % 26;
        wor[i] = s;
    }

    for(int i=0; i<wor.size();i++){
        char c = 'z' - wor[i];
        ans.push_back(c);
    }

    return ans;
}


int main(){
    vector<string> words = {"abcd","def","xyz"};
    vector<int> weights = {5,3,12,14,1,2,3,2,10,6,6,9,7,8,7,10,8,9,6,9,9,8,3,7,7,2};

    string k = mapWordWeight(words,weights);

    for(int i=0; i<k.size();i++){
        cout<<k[i]<<" ";
    }

}