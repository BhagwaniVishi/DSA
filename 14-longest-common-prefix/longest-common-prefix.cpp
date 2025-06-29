class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())return "";
        sort(strs.begin(), strs.end());
        string first = strs[0], last=strs.back(), result="";
        for(int i=0; i<first.size();i++){
            if(i<last.size() && first[i]==last[i]){
                result+=first[i];
            }
            else{
                break;
            }
        }
        return result;
    }
};
