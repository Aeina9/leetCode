class Solution {
    public boolean containsDuplicate(int[] nums) {
        
        Set<Integer> hset = new HashSet<Integer>();
        for(int i : nums){
            if (hset.contains(i)){
                return true;    
            }
            hset.add(i);
        }
        return false;
    }
}