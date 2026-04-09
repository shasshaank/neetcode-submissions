class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i = 0;
        int j = 0;
        while(i<word.length()&&j<abbr.length()){
            if(word[i]==abbr[j]){
                i = i+1;
                j = j+1;
            }else if(isdigit(abbr[j])){
                if(abbr[j]=='0') return false;

                int sublen = 0;
                while(j<abbr.length()&&isdigit(abbr[j])){
                    sublen = sublen*10+(abbr[j]-'0');
                    j++;
                }

                i+=sublen;
                
            }else{
                return false;
            }
        }

        return i == word.length() && j == abbr.length();
    }
};