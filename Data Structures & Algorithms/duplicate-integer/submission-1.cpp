class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        for(int i : nums){
            if(m.find(i)!=m.end()){
                m[i]++;
                if(m[i]>1){
                    return true;
                }
            }
            else{
                m[i]=1;
            }
        }
        return false;
    }
};