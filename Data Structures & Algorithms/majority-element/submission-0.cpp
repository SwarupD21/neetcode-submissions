class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            if(m[nums[i]]>=(n/2)){
                ans = nums[i]; 
            }
            m[nums[i]]++;
        }
        return ans;
    }
};