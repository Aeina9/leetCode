class Solution {
    public int[] twoSum(int[] nums, int target) {
        
        HashMap<Integer, Integer> hmap = new HashMap<Integer, Integer>();
        int results[] = new int[2];
        
        for(int i = 0; i < nums.length; ++i){
            int comp = target - nums[i];
            if (hmap.containsKey(comp)){
                results[0] = hmap.get(comp);
                results[1] = i;
                return results;
            }
            hmap.put(nums[i], i);
        }
        return results;
    }
}