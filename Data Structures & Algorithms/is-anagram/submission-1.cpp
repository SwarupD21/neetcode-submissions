class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m;
        unordered_map<char,int> n;
        for(char x: s){
            if(m.find(x)!=m.end()){
                m[x]++;
            }
            else{
                m[x]=1;
            }
        }
        for(char x: t){
            if(n.find(x)!=n.end()){
                n[x]++;
            }
            else{
                n[x]=1;
            }
        }
        for(int x: s){
           if(m[x]!=n[x]){
            return false;
           }
        }
        for(int x: t){
           if(n[x]!=m[x]){
            return false;
           }
        }
        return true;
    }
};
