from collections import defaultdict

class Solution:

    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        result = defaultdict(list)
        
        for s in strs:
            
            sorted_s = tuple(sorted(s))
            
            result[sorted_s].append(s)

        
        return list(result.values())