class Solution {
public:
    int maxArea(vector<int>& height) {

        // brute force

        // int n = height.size();
        // int maxarea = 0;
        // for (int i=0; i < n; i++) {
        //     for (int j = i + 1; j < n; j++) {
        //         int area = min(height[i], height[j]) * (j - i);
        //         maxarea = max(area, maxarea);
        //     }
        // }
        // return maxarea;

        // optimal
        int n = height.size();
        int maxarea = 0;
        int i=0;
        int j=n-1;
        while(i<j){
            int h= min(height[i],height[j]);
            int width = j-i;
            int area = h * width; 

            maxarea = max(maxarea, area);

            if(height[i]<height[j])i++;
            else j--;

        }


        return maxarea;






    }
};