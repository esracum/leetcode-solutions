class Solution:
    def lengthOfLongestSubstring(self, s: str, debug: bool = False) -> int:
        n = len(s)
        res = 0
        res_substr = ""

        for i in range(n):
            seen = set()       
            current = ""

            # Initializing all characters as not visited
            vis = [False] * 26

            for j in range(i, n):
                if s[j] in seen:   # tekrar eden karakter
                    break
                seen.add(s[j])     # yeni karakteri ekle
                current += s[j]

                # If current character is visited
                # Break the loop
                

                if len(current) > res:  # en uzun mu kontrol et
                    res = len(current)
                    res_substr = current
        print(res)
        print(res_substr)

        return res

       
