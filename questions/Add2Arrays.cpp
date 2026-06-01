#include<iostream>
#include<vector>

using namespace std;

int AddArrays(vector<int>& a,int n, vector<int>& b, int m){
    string s;
    string q;
    for(int i =0;i<n;i++){
        s += to_string(a[i]);
    }
    for(int i =0;i<m;i++){
        q += to_string(b[i]);
    }

    int p = stoi(s);
    int c = stoi(q);
    int sum = p+c; 
    return sum;
}

// #include <bits/stdc++.h> 

// vector<int> reverse(vector<int> v){
// 	int s = 0;
// 	int e = v.size()-1;

// 	while(s<e){
// 		swap(v[i++],v[j--]);
// 	}

// 	return v;
// }

// vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
// 	// Write your code here.
// 	int i = n-1;
// 	int j = m-1;
// 	vector<int> ans;

// 	int carry = 0;

// 	while(i>=0 && j>=0){
// 		int val1 = a[i];
// 		int val2 = b[j]; 

// 		int sum = val1+val2+carry;
// 		carry = sum/10;
// 		sum = sum%10;
// 		ans.push_back(sum);
// 		i--;
// 		j--;
// 	}

// 	while(i>=0){
// 		int val1 = a[i]; 

// 		int sum = val1+carry;
// 		carry = sum/10;
// 		sum = sum%10;
// 		ans.push_back(sum);
// 		i--;
// 	}

// 	while(j>=0){
// 		int val1 = b[j]; 

// 		int sum = val1+carry;
// 		carry = sum/10;
// 		sum = sum%10;
// 		ans.push_back(sum);
// 		j--;
// 	}

// 	while(carry !=0){
// 		int sum = carry;
// 		carry = sum/10;
// 		sum = sum%10;
// 		ans.push_back(sum);
// 		j--;
// 	}

// 	return reverse(ans)
// }

int main(){
    vector<int> a = {3,4,5};
    vector<int> b = {4,5,1};

    cout<<AddArrays(a,3,b,3);
}