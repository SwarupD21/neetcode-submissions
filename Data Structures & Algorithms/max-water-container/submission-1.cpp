class Solution {
public:
    int maxArea(vector<int>& heights) {
        int area = 0;
        int n = heights.size();
        int i=0;
        int j = n-1;
        while(i<j){
            int length = min(heights[i],heights[j]);
            int breadth = j-i;
            area = max(area,length*breadth);
            if(heights[i]<heights[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return area;
    }
};
