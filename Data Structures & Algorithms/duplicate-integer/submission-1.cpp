class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>newSet;
        for(int num:nums){
            newSet.insert(num);
        }

        if(newSet.size()==nums.size()){
            return false;
        }

        return true;
    }
};