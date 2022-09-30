class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string finalPrefix;
        char c;
        for(int i = 0; i < 200; i++){
            if (strs[0][i]){
                c = strs[0][i];   
            }
            else{
                return finalPrefix;
            }
            
            for(int j = 0; j < strs.size(); j++){
                if(c != strs[j][i]) {
                    return finalPrefix;
                }
            }
            finalPrefix.push_back(c);    
        }
    return finalPrefix;
    }
};