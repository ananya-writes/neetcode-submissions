class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int res = 0;
        // xor -> a^a = 0; else a^b=1;
        // xor -> 0^num = num; num^num = 0;
        for(int num : nums){
             res^=num;
        }
        return res;
    }
};
