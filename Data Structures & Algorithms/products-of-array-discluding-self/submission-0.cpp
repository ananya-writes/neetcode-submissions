class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> sol(n);

        //int prod = 1;
        for(int i =0;i<n;i++){
            int prod = 1;
            for(int j=0; j<n; j++)
                if (i!=j)
                    prod = prod * nums[j];
            sol[i]=prod;
            /*if(prod == 0){
                sol.push_back(0);
                continue;
            }
            if(nums[i] != 0)
                sol.push_back(prod/nums[i]);
            else 
                sol.push_back(nums[i]);
            
            prod = 1;*/

        }

        return sol;
    }
};
