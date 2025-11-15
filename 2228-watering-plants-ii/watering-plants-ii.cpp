class Solution {
public:
    int minimumRefill(vector<int>& plants, int capacityA, int capacityB) {
        int n = plants.size();
        int i = 0, j = n - 1;
        int curA = capacityA, curB = capacityB;
        int refills = 0;

        while (i < j) {
            if (curA < plants[i]) {
                refills++;
                curA = capacityA;
            }
            curA -= plants[i];
            i++;

            if (curB < plants[j]) {
                refills++;
                curB = capacityB;
            }
            curB -= plants[j];
            j--;
        }

        // When both meet at the same plant
        if (i == j) {
            int need = plants[i];
            if (max(curA, curB) < need) refills++; 
        }

        return refills;
    }
};
