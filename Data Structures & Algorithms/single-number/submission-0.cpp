class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int sol = 0;
        unordered_map<int ,int> mp;
        for(int &num : nums){
            mp[num]++;
        }
        for(auto &ele : mp){
            int check  = ele.second;
            if(check == 1)
                sol = ele.first;
        }

        return sol;
    }
};
