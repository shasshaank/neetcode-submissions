class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        unordered_map<string,vector<string>> freq;
        for(string s:strs){
            string sortedString = s;
            sort(sortedString.begin(),sortedString.end());
            freq[sortedString].push_back(s);
        }

        for(auto &pairs: freq){
            result.push_back(pairs.second);
        }

        return result;
    }
};
