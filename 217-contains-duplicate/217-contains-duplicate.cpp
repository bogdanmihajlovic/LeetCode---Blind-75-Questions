class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int, int> hashmap;
        for(int i  = 0;i < nums.size();i++){
            if(hashmap.count(nums[i]))
                return true;
            hashmap.insert({nums[i], i});
        }
        return false;
        
    }
};