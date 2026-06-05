class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       // sort(nums.begin(),nums.end());
        vector <int> indices;
        for(int i =0; i<nums.size(); i++){
            for(int j = i+1;j<nums.size();j++){
                //int t2 = target - nums[i];
                if(target == nums[i] + nums[j]){
                    return{i,j};
                    // indices.push_back(i);
                    // indices.push_back(j);
                    // break;
                }
            }
        }
        return{};
        //return indices;
    }
};
