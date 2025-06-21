class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n= arr.size();
        int zeroes=0;
        for(int i=0; i<n; i++){
            if(arr[i]==0)zeroes++;
        }
        int i=n-1;
        int j=n+zeroes-1;
        while(i<j){
            if(j<n)arr[j]=arr[i];
            if(arr[i]==0){
                j--;
                if(j<n)arr[j]=0;
            }
            j--;
            i--;
        }
        

    }
};