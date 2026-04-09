class Solution {
public:

    int setBits(int n){
        int res = 0;
        for(int i=0;i<32;i++){
            if((n>>i) &1){
                res+=1;
            }
        }

        return res;
    }

    vector<int> countBits(int n) {
        vector<int>result;
        for(int i=0;i<=n;i++){
            int res = setBits(i);
            result.push_back(res);
        }

        return result;
    }
};
