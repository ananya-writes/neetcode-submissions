class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;

        for(int i =0; i<len1; i++){
            mp1[s[i]]++;
        }

        for(int i =0; i<len2; i++){
            mp2[t[i]]++;
        }

        if(mp1==mp2){
            return true;
        }

        return false;
    }
};
