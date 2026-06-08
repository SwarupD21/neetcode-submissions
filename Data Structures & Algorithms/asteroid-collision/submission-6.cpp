class Solution {
public:
    vector<int> asteroidCollision(vector<int>& ast) {
        stack<int> st;
        vector<int> res;
        for(int i=0;i<ast.size();i++){
            if(st.empty() || ast[i]>0){
                st.push(ast[i]);
            }
            else{
                while(!st.empty() && st.top()>0 && st.top()<abs(ast[i])){
                    st.pop();
                }
                if (st.empty() || st.top() < 0) {
                    st.push(ast[i]);
                }
                else if (st.top() == abs(ast[i])) {
                    st.pop(); 
                }
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};