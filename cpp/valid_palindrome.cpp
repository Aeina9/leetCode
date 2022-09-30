class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;
        
        for(int i = 0; i < s.length(); ++i){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        }        
        
        for(int i = 0; i < str.size()/2; ++i){
            if(str[i] != str[str.size()-i-1]){
                return false;
            }
        }
        return true;
    }
};