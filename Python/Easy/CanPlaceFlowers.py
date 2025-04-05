class Solution:
    def canPlaceFlowers(self, flowerbed: List[int], n: int) -> bool:
        n1 = 0
        if len(flowerbed)==1 and flowerbed[0]==0:
            return True if n<=1 else False
        if len(flowerbed)==1 and flowerbed[0]==1:
            return True if n==0 else False
        for i in range(len(flowerbed)):
            if i==0:
                if flowerbed[i]==0 and flowerbed[i+1]==0:
                    n1+=1
                    print("I'm incrementing n1 for i=0")
                    flowerbed[i]=1
            elif i==len(flowerbed)-1:
                if flowerbed[i-1]==0 and flowerbed[i]==0 and flowerbed[i]==0:
                    n1+=1
                    flowerbed[i]=1
                    print("I'm incrementing n1 for i=len(flowerbed)")
            else:
                if flowerbed[i-1] == 0 and flowerbed[i+1]==0 and flowerbed[i]==0:
                    n1+=1
                    flowerbed[i]=1
                    print("I'm incrementing n1 for i=",i)
        print("flowerbed is: ", flowerbed)
        print("n1 is: ", n1)
        return True if n1>=n else False


