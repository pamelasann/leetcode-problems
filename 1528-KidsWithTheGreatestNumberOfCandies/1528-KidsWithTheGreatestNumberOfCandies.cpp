// Last submission: 11/26/2023, 10:34:32 PM
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> results;
        int maxCandies = *max_element(candies.begin(), candies.end());
        // iterate through the candies
        for(int i = 0; i < candies.size(); i++) {
            // sum extraCandies and compare
            if(candies[i] + extraCandies >= maxCandies) {
                results.push_back(true);
            }
            else
                results.push_back(false);
        }
        return results;
    }
};