class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> sol;

        unordered_map<int,int> mp;
        int n = nums.size();

        for(int i =0; i<n; i++){
            int key = target - nums[i];
            if(mp.find(key)!=mp.end()){
                return {mp[key], i};
            }
            mp.insert({nums[i],i});
        }

        return sol;
    }
};
