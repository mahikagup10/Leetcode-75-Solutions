class Solution:
    def reverseWords(self, s: str) -> str:
        sl = s.split()
        # print(sl)
        i = 0
        j = len(sl)-1
        while(i<j):
            temp = sl[i]
            sl[i] = sl[j]
            sl[j] = temp
            i+=1
            j-=1
        res = ""
        for k in range(len(sl)-1):
            res+=sl[k] + " "
        res+=sl[len(sl)-1]
        return res


    

        
        
