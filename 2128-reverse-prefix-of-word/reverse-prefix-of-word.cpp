class Solution {
public:
    string reversePrefix(string word, char ch) {
        int n = word.length();
        int idx = 0;
        for(int i=0;i<n;i++){
            if(word[i]==ch){
                idx = i;

                break;
            }
        }
        if(idx != 0){
            reverse(word.begin(),word.begin()+idx+1);
            return word;
        }
        return word;
    }
};