class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int>mp;
        for(int i=0; i<nums.size(); i++){
            int preSum= target - nums[i];
            if(mp.find(preSum)!=mp.end()){
                return {mp[preSum], i};
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return {};
    }
};