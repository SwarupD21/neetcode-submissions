class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs.size();
        if(strs.size()==1){
            return strs[0];
        }

        sort(strs.begin(),strs.end());
        if(strs[0][0]!=strs[n-1][0]) return "";

        for(int i=0;i<min(strs[0].size(),strs[n-1].size());i++){
            if(strs[0][i]==strs[n-1][i]){
                ans+=strs[0][i];
            }
        }

        return ans;
    }
};