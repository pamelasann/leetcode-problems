// Last submission: 11/18/2023, 4:06:53 PM
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        int sum = nums[0];
        result.push_back(sum);
        for(int i = 1; i < nums.size(); i++){
            sum += nums[i];
            result.push_back(sum);
        }

        return result;
    }
};