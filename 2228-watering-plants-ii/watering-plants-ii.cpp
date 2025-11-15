class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int currA = capacityA;
        int currB = capacityB;
        int i = 0;
        int j = n-1;
        int count = 0;
        while(i<j){
            if(currA < plants[i]){
                currA = capacityA;
                count++;
            }
            currA = currA -  plants[i];
            i++;

            if(currB < plants[j]){
                currB = capacityB;
                count++;

            }
            currB = currB - plants[j];
            j--;
             
             if(i==j){
                int greater = max(currA, currB);

                if(greater < plants[i]) count++;

             }
        }
        return count;
    }
};