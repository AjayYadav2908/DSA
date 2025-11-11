class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        if (n < 3) return {};

        sort(nums.begin(), nums.end());

        for (int n1 = 0; n1 < n; n1++) {
            if (n1 > 0 && nums[n1] == nums[n1 - 1]) continue; 

            int i = n1 + 1;
            int j = n - 1;

            while (i < j) {
                int sum = nums[n1] + nums[i] + nums[j];

                if (sum < 0) i++;
                else if (sum > 0) j--;
                else {
                    ans.push_back({nums[n1], nums[i], nums[j]});
                    i++;
                    j--;

                    
                    while (i < j && nums[i] == nums[i - 1]) i++;

                   
                    while (i < j && nums[j] == nums[j + 1]) j--;
                }
            }
        }

        return ans;
    }
};
