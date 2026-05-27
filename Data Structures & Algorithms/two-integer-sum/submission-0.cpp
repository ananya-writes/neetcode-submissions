class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;

        int n = nums.size();

        unordered_map <int,int> mp;

        //for(int i = 0; i<n; i++){
        //    mp[nums[i]] = i;
        //}

        for(int i = 0; i<n; i++){
            int c1 = nums[i];
            int c2 = target - c1;
            //auto it = mp.find(c2);
            //    sol.push_back({i,it.second}); 
            
            if(mp.find(c2) != mp.end()){
                //return ({mp[c2],i});
                //sol.push_back(i);
                sol.push_back(mp[c2]);
                sol.push_back(i);
            }
            mp.insert({nums[i],i});
        }
        return sol;
    }
};
