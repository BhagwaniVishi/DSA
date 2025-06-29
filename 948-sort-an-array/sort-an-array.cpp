class Solution {
public:
// in_place method of merge sort 
    void mergeplace(vector<int>& nums, int s, int mid, int e){
int total_len = e-s+1;
int gap = total_len/2 + total_len%2;        //ceil nikalne ka method hai
  while(gap>0){
    int i=s, j=s+gap;
    while(j<=e){
        if(nums[i]>nums[j]){
            swap(nums[i],nums[j]);
        }
        i++, j++;
    }
    gap = gap<=1 ? 0 : (gap/2) + (gap%2);

  }

    }

    void mergeSort(vector<int>& nums,  int s, int e) {
        if (s >= e)
            return;

        int mid = s + (e - s) / 2;

        mergeSort(nums,s, mid);
        mergeSort(nums, mid + 1, e);
        mergeplace(nums, s, mid, e);
    }


    vector<int> sortArray(vector<int>& nums) {
       
        mergeSort(nums,0, nums.size() - 1);
        return nums;
    }
};