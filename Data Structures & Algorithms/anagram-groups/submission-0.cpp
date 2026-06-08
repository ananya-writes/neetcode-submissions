class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> sol;
        unordered_map<string, vector<string>> mp1; // string , char sum

        for(auto &s:strs){
            string sorts = s;
            sort(sorts.begin(),sorts.end()); // cat became act
            mp1[sorts].push_back(s);
        }

        for(auto &pair : mp1){
            sol.push_back(pair.second);
        }

        return sol;
    }
};
