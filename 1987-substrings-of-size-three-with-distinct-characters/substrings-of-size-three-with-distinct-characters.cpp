class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.length();
        int count =0;

        for(int i=0;i<=n-3;i++){
            int j=i;
            if(s[j]!=s[j+1] && s[j]!=s[j+2]&& s[j+1]!=s[j+2]){
                count++;
            }
            
        }
        return count;
    }
};