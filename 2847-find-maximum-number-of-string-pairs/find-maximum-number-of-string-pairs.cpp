class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {

        // brute force
        //     int n = words.size();
        //     int pairs=0;
        //     for(int i=0;i<n-1;i++){
        //         string rev = words[i];
        //         reverse(rev.begin(),rev.end());
        //        for(int j=i+1;j<n;j++){
        //          if(rev== (words[j])){
        //             pairs++;
        //             break;
        //          }
        //        }

        //     }
        //     return pairs;
        // }

        // using sets
        int n = words.size();
        unordered_set<string> s;
        for (int i = 0; i < n; i++) {
            s.insert(words[i]);
        }

        int count=0;

        for (int i = 0; i < n; i++) {
            string rev = words[i];
            reverse(rev.begin(), rev.end());
            if (rev == words[i])
                continue;
            if (s.find(rev) != s.end()) {
                count++;
                s.erase(words[i]);
            }
        }
        return count;
    }
};