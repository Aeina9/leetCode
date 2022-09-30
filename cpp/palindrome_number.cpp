class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        string newstr;
        for(int i = 0; i < str.length(); ++i){
            newstr.push_back(str[str.length() - (i+1)]);
        }
        if (newstr == str){
            return true;
        }
        return false;
    }
};