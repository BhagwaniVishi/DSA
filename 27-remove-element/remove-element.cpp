class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        for(int j=i;j<nums.size(); j++){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};