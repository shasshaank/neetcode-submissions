class Solution {
public:

    int max(vector<int>&piles){
        int n = piles.size();
        int max = INT_MIN;
        for(int i=0;i<n;i++){
            if(piles[i]>max){
                max = piles[i];
            }
        }

        return max;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        int left = 1;
        int right = max(piles);
        int res = right;
        
        while(left<=right){
            int k = left+(right-left)/2;
            double hours = 0;
            for(int i=0;i<n;i++){
                hours+=ceil((double)piles[i]/k);
            }
            if(hours<=h){
                res = min(res,k);
                right = k-1;
            }else{
                left = k+1;
            }
        }

        return res;
    }
};
