class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s) == 1:
            return 1
        i = 0
        j = 0
        temp = set()
        res = 0
    
        while i < len(s) and j < len(s):
            char = s[j]

            if char not in temp:
                temp.add(char)
                j += 1
                res = max(res, j - i)
            else:
                
                temp.remove(s[i])
                i += 1
        
        return res
                
               
                