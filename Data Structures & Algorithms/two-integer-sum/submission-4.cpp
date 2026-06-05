class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> cop; // vector of pair<ele, index>

        int n =nums.size();
        
        for(int i =0; i<n;i++){
            cop.push_back({nums[i],i});
        }

        sort(cop.begin(),cop.end()); // ele sorted

        int i=0,j=n-1;
        while(i<j){
            int curr = cop[i].first + cop[j].first;
            if(curr == target){
                return {min(cop[i].second,cop[j].second) , 
                        max(cop[i].second,cop[j].second)};
            }
            else if(curr < target){
                i++;
            }
            else{
                j--;
            }
        }
        return{};
    }
};
