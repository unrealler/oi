class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        min_length = min([len(s) for s in strs])
        common_prefix = ""
        for i in range(min_length):
            for s in strs:
                if s[i] != strs[0][i]:
                    return common_prefix
            common_prefix = common_prefix + strs[0][i]
        
        return common_prefix


solution = Solution()

input = ["flower","flow","flight"]
input = ["dog","racecar","car"]
print(f"in: {input}\nout: {solution.longestCommonPrefix(input)}")