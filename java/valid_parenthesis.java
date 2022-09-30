class Solution {
    public boolean isValid(String s) {
        
        Stack<Character> paren = new Stack<Character>();
        
        
        
        for(int i = 0; i < s.length(); i++){
            if(s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{'){
                paren.push(s.charAt(i));
            }
            else if(!paren.isEmpty()){
                if (paren.peek() == '(' && s.charAt(i) == ')'){
                    paren.pop();
                }
                else if (paren.peek() == '[' && s.charAt(i) == ']'){
                    paren.pop();
                }
                else if (paren.peek() == '{' && s.charAt(i) == '}'){
                    paren.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return paren.isEmpty();
    }
}