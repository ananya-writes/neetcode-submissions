class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n =nums.size();
        vector<int>sol(n,0);
        int cnt_zero = 0, prod = 1;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
                prod*=nums[i];
            }
            else{
                cnt_zero++;
            }
        }

        if(cnt_zero>1)
            return sol;

        for(int i=0;i<n;i++){
            if(cnt_zero>0){
                if(nums[i] == 0)
                    sol[i] = prod;
                else
                    sol[i] = 0;
            }
            else 
                sol[i] = prod/nums[i];
        }
        return sol;
    }
};
