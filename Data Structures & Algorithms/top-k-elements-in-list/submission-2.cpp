class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> freq;
        // sort(nums.begin(),nums.end());
        unordered_map<int, int> mp1;

        for(int i=0; i<nums.size(); i++){
            mp1[nums[i]] = mp1[nums[i]] + 1;
        }

        /*
        unordered_map<int,vector<int>> mp2;
        vector<int> count;
        for(auto &it : mp1){
            mp2[it.second].push_back(it.first);
        }
        */
        vector<pair<int,int>> count2;

        for(auto &it : mp1){ // vector of pair<freq,ele>
            count2.push_back({it.second,it.first});
        }
        // sort the pair now
        sort(count2.begin(), count2.end(), greater<pair<int, int>>());

        for(auto& it : count2){
            freq.push_back(it.second);
            k--;
            if(k==0) {
                break;
            }
        }



/*
        for(auto &ele : mp2){
            count.push_back(ele.first);
        }

        sort(count.rbegin(),count.rend());
        auto comp = [](pair<int,int> &a, pair<int,int> &b) {
            return a.second < b.second;
        }
        sort(count.begin(), count.end(), comp);


        /*
        for(auto& it : mp){
            freq.push_back(it.first);
            k--;
            if(k==0) {
                break;
            }
        }
        */
        return freq;
    }
};
