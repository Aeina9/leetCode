class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        string combos[] = {"IV", "IX", "XL", "XC", "CD", "CM"};
        int size = sizeof(combos)/sizeof(combos[0]);
        
        for(int i = 0; i < size; ++i){
            size_t pos = s.find(combos[i]);
            if (pos != string::npos){
                if (i == 0) {total+=4;}
                if (i == 1) {total+=9;}
                if (i == 2) {total+=40;}
                if (i == 3) {total+=90;}
                if (i == 4) {total+=400;}
                if (i == 5) {total+=900;}
                s.erase(pos, 2);
            }
        }
        
        for(int i = 0; i < s.length(); ++i){
            if (s[i] == 'I') {total+=1;}
            if (s[i] == 'V') {total+=5;}
            if (s[i] == 'X') {total+=10;}
            if (s[i] == 'L') {total+=50;}
            if (s[i] == 'C') {total+=100;}
            if (s[i] == 'D') {total+=500;}
            if (s[i] == 'M') {total+=1000;}
        }
        return total;
    }
};