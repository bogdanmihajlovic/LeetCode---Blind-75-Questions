class Solution {
public:
    int maxArea(vector<int>& height) {
        int currMax = 0;
        int i = 0;
        int j = height.size() - 1;
        while(i < j){
            int temp = j - i;
            temp *= min(height[i], height[j]);
            if(temp > currMax) currMax = temp;
            if(height[i] > height[j]) j--;
            else i++;
        }
        return  currMax;
    }
};