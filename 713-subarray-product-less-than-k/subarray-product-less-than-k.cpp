class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        int count=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]<k)count++;
            int product=nums[i];
            for(int j=i+1; j<nums.size(); j++){
                product = product*nums[j];
                if(product<k)count++;
                else break;
            }
            
            

        }
        return count;
        
        
    }
};