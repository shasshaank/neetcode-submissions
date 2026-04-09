class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int current_sum = 0;
        int max_sum = INT_MIN;
        for(int i =0;i<n;i++){
            if(current_sum<0){
                current_sum = 0;
            }
            
            current_sum+=nums[i];
            max_sum = max(current_sum,max_sum);
            
        }

        return max_sum;
    }
};
