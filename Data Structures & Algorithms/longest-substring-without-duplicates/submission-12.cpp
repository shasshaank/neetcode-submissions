class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>freq;
        int l = 0;
        int longest = 0;
        for(int r=0;r<s.size();r++){
            while(freq.find(s[r])!=freq.end()){
                freq.erase(s[l]);
                l++;
            }

            longest = max(longest,r-l+1);
            freq.insert(s[r]);
        }

        return longest;
    }
};
