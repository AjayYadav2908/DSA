class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        // brute force
        // vector<int>ans(n);
        // int j=0;
        // for(int i=0;i<n;i++){
        //     if(nums[i]<pivot){
        //        ans[j]=nums[i];
        //        j++; 
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]==pivot){
        //        ans[j]=nums[i];
        //        j++; 
        //     }
        // }
        //   for(int i=0;i<n;i++){
        //     if(nums[i]>pivot){
        //        ans[j]=nums[i];
        //        j++; 
        //     }
        // }
        // return ans ;
        vector<int> res(n,0);

        int countless =0;
        int countequal =0;
        for(int i =0;i<n;i++){
            if(nums[i]<pivot)countless++;
            else if(nums[i]==pivot)countequal++;
        }
        int x=0;
        int j = countless;
        int k = countless+countequal;
        
        for(int i=0;i<n;i++){
            if(nums[i]<pivot){
                res[x]=nums[i];
                x++;
            }
            else if(nums[i]==pivot){
                res[j]=nums[i];
                j++;
            }
            else if(nums[i]>pivot) {
                res[k]= nums[i];
                k++;
            }
        }
        return res;

       

        
    }
};