class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int l=0;
        int r=n-1;
        int mid=0;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                mid = i+1;
            }
        }
        return nums[mid];
    }
};
