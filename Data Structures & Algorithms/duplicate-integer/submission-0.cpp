class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> m;
        for(int x: nums){
            if(m.find(x)!=m.end()){
                return true;
            }
            m[x]++;
        }
        return false;
    }
};