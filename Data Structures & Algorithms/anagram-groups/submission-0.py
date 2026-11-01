class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        

        dictionary = {};
        i = 0

        while i < len(strs):
            letters = [0]*26
            for c in strs[i]:
                letters[ord(c) - ord('a')] += 1 
            
            key = tuple(letters)
            if key in dictionary:
                dictionary[key].append(strs[i])
            else:
                dictionary[key] = [strs[i]]

            i += 1
        
        return list(dictionary.values())




