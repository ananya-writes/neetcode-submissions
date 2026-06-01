class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        bool ans = false;
        map<int,int> mp;
        for(auto it: nums){
            mp[it]++;
            if(mp[it]>1)
                ans = true;
        }
        return ans;
    }
};