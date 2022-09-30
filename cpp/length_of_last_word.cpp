class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> seglist;
        string currString = "";

        
        for(int i = 0; i < s.length(); ++i){
            if (s[i] != ' '){
                currString = currString + s[i];
                if (i == s.length() - 1){
                    seglist.push_back(currString);
                }
            }
            else if (i > 0 && s[i] == ' ' && s[i-1] != ' '){
                seglist.push_back(currString);
                currString = "";
            }
        }
        
        return seglist[seglist.size()-1].length();

    }
};