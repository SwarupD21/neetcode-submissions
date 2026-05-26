class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0;i<tokens.size();i++){
            string ch = tokens[i];
            if(ch=="+"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(x+y);
            }
            else if(ch=="-"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y-x);
            }
            else if(ch=="*"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(x*y);
            }
            else if(ch=="/"){
                int x = st.top();
                st.pop();
                int y = st.top();
                st.pop();
                st.push(y/x);
            }
            else{
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};
