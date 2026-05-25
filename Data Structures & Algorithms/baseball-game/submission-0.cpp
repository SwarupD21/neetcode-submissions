class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n = operations.size();
        for(int i=0;i<n;i++){
            string ch = operations[i];
            if(ch=="+"){
                int x = st.top();
                st.pop();
                int y = x + st.top();
                st.push(x);
                st.push(y);
            }
            else if(ch=="C"){
                st.pop();
            } 
            else if(ch=="D"){
                int z = st.top();
                st.push(2*z);
            }
            else{
                int m = stoi(ch);
                st.push(m);
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};