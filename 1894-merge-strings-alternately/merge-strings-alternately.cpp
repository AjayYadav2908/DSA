class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 = word1.size();
        int n2 = word2.size();
        int i=0;
        int j=0;
        int k=0;
        string ans(n1+n2,'a');
        while(i<n1 && j<n2){
            if(k%2 ==0){
                ans[k]=word1[i];
                i++;
                k++;

            }
            else{
                ans[k]=word2[j];
                j++;
                k++;
            }

        

        }

        if(i>=n1){
            while(j<n2){
                ans[k]=word2[j];
                j++;
                k++;

            }
        }

         if(j>=n2){
            while(i<n1){
                ans[k]=word1[i];
                i++;
                k++;
                
            }
        }
        return ans;

    }
};