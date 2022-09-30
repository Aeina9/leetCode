class Solution {
    public boolean isPalindrome(String s) {
        
        int start = 0;
        int end = s.length()-1;
        
        if(s.length() <= 1){
            return true;
        }
        
        while(start < end){
            Character pt1 = s.charAt(start);
            Character pt2 = s.charAt(end);
            
            if(!Character.isLetterOrDigit(pt1)){
                start++;
                continue;
            }
            if(!Character.isLetterOrDigit(pt2)){
                end--;
                continue;
            }
            if(Character.toLowerCase(pt1) != Character.toLowerCase(pt2)){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
}