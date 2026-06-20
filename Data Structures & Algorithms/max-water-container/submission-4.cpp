class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int water = 0;
        while(left<right){
            int currentWater = (right - left) * min(heights[left],heights[right]);
            water = max(currentWater,water);
            if(heights[left]<heights[right]){
                left++;
            }else{
                right--;
            }
            
        }

        return water;
    }
};
