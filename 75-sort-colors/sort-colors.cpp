class Solution {
public:
    void sortColors(vector<int>& nums) {
        //TWO PASS SOLUTION
        int NOZ=0;
        int NOO =0;
        int NOT=0;
        //Counting the no. of 0's,1's and 2's
        for(int i=0; i<=nums.size()-1 ;i++){
            if (nums[i]==0){
                NOZ++;
            }
            if(nums[i]==1){
                NOO++;
            }
            if(nums[i]==2){
                NOT++;
            }
        }

        // Filling the elements in the array

        for(int i=0; i<=nums.size()-1 ;i++){
            if(i<NOZ){
                nums[i]=0;
            }
            else if(i<(NOZ+NOO)){   // inn dno ke sum se chota ho to 1 dal do
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }
        }
        return;
        

    }
};