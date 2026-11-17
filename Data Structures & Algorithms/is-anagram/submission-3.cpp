class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        unordered_map<char,int> m;
        unordered_map<char,int> n;
        for(char i: s){
            if(m.find(i)!=m.end()){
                m[i]++;
            }
            else{
                m[i]=1;
            }
        }
        for(char j: t){
            if(n.find(j)!=n.end()){
                n[j]++;
            }
            else{
                n[j]=1;
            }
        }
        return m==n;
    }
};
