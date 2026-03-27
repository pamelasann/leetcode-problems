// Last submission: 11/18/2023, 4:21:46 PM
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0; // error handling

        for(int i = 0; i < accounts.size(); i++) {
            int wealth = 0; //error handling
            for(int j = 0; j < accounts[i].size(); j++) {
                wealth = accounts[i][j] + wealth;
            }
            if(wealth > maxWealth)
                maxWealth = wealth;
        }
        return maxWealth;
    }
};