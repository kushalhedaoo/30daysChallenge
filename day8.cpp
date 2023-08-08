// How do you check if two strings are anagrams of each other?
// 

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())return false;
        bool flag=true;
        unordered_map<char,int>map;
        for(int i=0;i<s.size();i++){
            map[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            if(map[t[i]]){
                map[t[i]]--;
                continue;}
            else {flag=false;break;}
        }
        if(flag)return true;
        else return false;
    }
};