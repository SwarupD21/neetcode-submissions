class Solution {
public:
    bool isPalindrome(string s) {
        string pal = "";
        for(int i=0;i<s.size();i++){
            if(isalnum(s[i])){
                pal=pal+ (char)tolower(s[i]);
            }
        }
        
        int i = 0;
        int j = pal.size()-1;
        while(i<j){
            if(pal[i]==pal[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
