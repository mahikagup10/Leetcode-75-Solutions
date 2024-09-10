class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int i;
        int maxC = candies[0];
        vector<bool> res;
        for(i = 0; i < candies.size()-1; i++){
            if(maxC<candies[i+1]){
                maxC = candies[i+1];
            }
        }
        for(i=0; i< candies.size(); i++){
            if(candies[i]+extraCandies>=maxC){
                res.push_back(true);
            }
            else{
                res.push_back(false);
            }
        }
        return res;
        
    }
    
};


//OR

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxC = *max_element(candies.begin(), candies.end());
        vector<bool> res(candies.size());

        for(int i=0; i< candies.size(); i++){
            if(candies[i]+extraCandies>=maxC){
                res[i] = true;
            }
            else{
                res[i] = false;
            }
        }
        return res;
        
    }
    
};

