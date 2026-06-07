class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = 0;
        int j = 0;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                swap(nums1[i],nums2[j]);
                i++;
            }
            else{
                i++;
            }
        }
        while(j<n){
            swap(nums1[i],nums2[j]);
            i++;
            j++;
        }
        sort(nums1.begin(),nums1.end());
    }
};