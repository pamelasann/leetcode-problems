// Last submission: 11/21/2023, 9:56:44 PM
class Solution {
public:
    int minDifference(vector<int>& nums) {
        int n = nums.size();
        // if n < 5, output will always be 0
        if(n < 5)
            return 0;

        sort(nums.begin(), nums.end());

        return min({nums[n - 1] - nums[3], 
                    nums[n - 2] - nums[2], 
                    nums[n - 3] - nums[1], 
                    nums[n - 4] - nums[0]});
    }
};