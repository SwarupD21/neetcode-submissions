class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i = 0;
        int j = 0;
        string res = "";
        while(word1[i]!='\0' && word2[j]!='\0'){
            char c1 = word1[i++];
            res += c1;
            char c2 = word2[j++];
            res += c2;
        }
        while(word1[i]!='\0'){
            char c1 = word1[i++];
            res += c1;
        }
        while(word2[j]!='\0'){
            char c2 = word2[j++];
            res += c2;
        }
        return res;
    }
};