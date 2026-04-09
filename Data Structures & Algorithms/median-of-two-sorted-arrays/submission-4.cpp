class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result = merge(nums1,nums2);
        int size = result.size();
        double median = 0;
        if(size%2==0){
            median = (result[(size/2) - 1]+result[size/2]) / 2.0;
        }else{
            median = result[size/2];
        }
        return median;
    }

    vector<int> merge(vector<int>& nums1, vector<int>& nums2){
        int i = 0;
        int j = 0;
        int m = nums1.size();
        int n = nums2.size();
        vector<int>res;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]){
                res.push_back(nums1[i]);
                i++;
            }else{
                res.push_back(nums2[j]);
                j++;
            }
        }

        while(i<m){
            res.push_back(nums1[i]);
            i++;
        }

        while(j < n) {
            res.push_back(nums2[j]);
            j++;
        }

        return res;
    }
};
