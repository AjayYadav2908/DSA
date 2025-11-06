class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
      int n = nums.size();
    // brute force
    // vector<int>v(n,0);
    // int j=0;  // pointer for even index

    // int k=1;   // pointer for odd index
    // for(int i=0;i<n;i++){
    //     if(nums[i]%2==0){
    //        v[j]=nums[i];
    //        j=j+2;
    //     }
    //     else {
    //         v[k]= nums[i];
    //         k=k+2;
    //     }

    // }
    // return v;
    
    int i =0;   //pointer for even idx
    int j=1;     // for odd idx
    while(i<n && j<n ){
        if(nums[i]%2==0) i=i+2;
        else if(nums[j]%2 !=0) j=j+2;
        else if(nums[i]%2 !=0 && nums[j]%2==0){
            swap(nums[i],nums[j]);
            i+=2;
            j+=2;
        }

    }
    return nums;


    
    }
};