class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        
        int maximum = candies[0];
        for(int i = 0; i < candies.size() ; i++) 
        {
            if(candies[i]> maximum)
          maximum = candies[i];
        }

        vector<bool> result(candies.size());


        for(int j = 0 ; j <  candies.size(); j++) 
        {
            candies[j] = candies[j] + extraCandies;
            if(candies[j] >= maximum) {
                result[j] = true;


            }
            else {
                result[j] = false;
            }
        }
return result;
    }
};