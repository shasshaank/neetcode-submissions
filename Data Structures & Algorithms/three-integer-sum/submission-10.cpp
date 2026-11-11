class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>res;
        sort(nums.begin(),nums.end());
        for(int start=0;start<nums.size();start++){
            int left = start+1;
            int right = nums.size()-1;
            if (start>0 && nums[start]==nums[start-1]) continue;
            while(left<right){
                int sum = nums[start]+nums[left]+nums[right];
                if(sum<0){
                    left++;
                }else if(sum>0){
                    right--;
                }else{
                    res.push_back({nums[start],nums[left],nums[right]});
                    left++;
                    right--;
                    while(left<right && nums[left]==nums[left-1]){
                        left++;
                    }
                    while(left<right && nums[right]==nums[right+1]){
                        right--;
                    }
                }
            }
        }
        return res;
    }
};
