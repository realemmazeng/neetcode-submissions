class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        dic = dict();
        i = 0

        if len(s) != len(t):
            return False

        while i < len(s):
            if s[i] in dic:
                dic[s[i]] += 1
            else:
                dic[s[i]] = 1
            i+=1

        j = 0
        while j < len(t):
            if t[j] in dic:
                dic[t[j]] -= 1
            j+=1

        return all(v == 0 for v in dic.values())
            
        