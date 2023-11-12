class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer;
        for(int i = 0; i <= n;i++){
            answer.push_back(countBitsOfInteger(i));
        }
        return answer;
    }

    static int countBitsOfInteger(int n){
        int count = 0;
        while (n){
            count += (n & 1);
            n >>= 1;
        }
        return count;
    }
};