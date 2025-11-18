class Solution {
public:

int reverse(int x){
    int rev = 0;
    while (x > 0) {
        rev = rev * 10 + (x % 10);
        x /= 10;
    }
    return rev;
}
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            int rev = reverse(nums[i]);
            nums.push_back(rev);

        }

        unordered_set<int> s;

         for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);           // insert only unique ele    
        }
        return s.size();      // yaha se hm isme bata skte hai ki kitne unique ele hai

      
    }
};