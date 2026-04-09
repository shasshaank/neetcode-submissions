class Solution {
public:
    bool isPalindrome(string s) {
        string res="";
        for(char c:s){
            if(isalnum(c)){
                res+=c;
            }
        }
        int left=0;
        int right = res.size()-1;
        while(left<right){
            if(tolower(res[left])==tolower(res[right])){
                left++;
                right--;
            }else{
                return false;
            }
        }

        return true;
    }
};
