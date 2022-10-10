class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size() - 1;
        int pos = 0;
        while(l < r){
            int mid = l + r;
            pos = nums[mid] < nums[pos] ? mid : pos;
            
            if(nums[mid] >= nums[l])
                l = mid + 1;
            else
                r = mid - 1;
        }
        return nums[pos];
    }
};