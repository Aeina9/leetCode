class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> umap;
        vector<int> results;
        
        for(int i = 0; i < nums.size(); ++i){
            int comp = target - nums[i];
            if (umap.find(comp) != umap.end()){
                results.push_back(umap[comp]);
                results.push_back(i);
                return results;
            }
            umap[nums[i]] = i; 
        }
        return results;
    }
};