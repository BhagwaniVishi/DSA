class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int>st;
        for(int i= 0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        if(st.size()<nums.size())return true;
        else return false;
    }
};