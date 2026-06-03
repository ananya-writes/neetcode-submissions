class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        int len1 = s.length();
        
        unordered_map<char,int> mp1; // for s string
        unordered_map<char,int> mp2; // for t string

        for(int i =0; i<len1; i++){
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        if(mp1==mp2){
            return true;
        }

        return false;
    }
};
