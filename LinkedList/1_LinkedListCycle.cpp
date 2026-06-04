#include<iostream>
#include<vector>
#include<map>
using namespace std;

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        map<ListNode* , bool> mp;
        while(temp !=NULL){
            if(mp.find(temp) != mp.end()){
                return true;
            }else{
                mp.insert({temp, true});
            }
            temp = temp ->next;
        }
        return false;
    }

};