/*
#LeetCode

Valid Anagram
Given two strings s and t , write a function to determine if t is an anagram of s.

Example_1:
Input: s = "anagram", t = "nagaram"
Output: true

Example_2:
Input: s = "rat", t = "car"
Output: false
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> c1(26),c2(26);
        int sL=s.size();
        int tL=t.size();
        //if(sL!=tL)return false;
        
        for(int i=0;i<sL;i++)
            c1[s[i]-'a']++;
        for(int i=0;i<tL;i++)
            c2[t[i]-'a']++;
        for(int i=0;i<26;i++)
            if(c1[i]!=c2[i])return false;
        
        return true;
    }
};