class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        for(int i = 0; i<flowerbed.size(); i++){
            if(i==0 && flowerbed[i]==0){
                if(flowerbed[i+1]==0){
                    count+=1;
                }
            }
            else if(i!=0 && flowerbed[i]==0){
                if(flowerbed[i-1]==0 && flowerbed[i+1]==0){
                    count+=1;
                }
            }
            else{
                continue;
            }
        }
        return count>=n;
        // if(count>=n){
        //     return true;
        // }
        // else{
        //     return false;
        // }
    }
};
