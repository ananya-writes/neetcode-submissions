class Solution {
public:
    bool isAnagram(string s, string t) {
        int len1 = s.length();
        int len2 = t.length();

        unordered_map <char,int> mp1;
        unordered_map <char,int> mp2;

        for(int i = 0; i<len1; i++){
            mp1[s[i]]++;
        }

        for(int j = 0; j<len2; j++){
            mp2[t[j]]++;
        }

        if(mp1==mp2){
            return true;
        }
        return false;
    }
};
