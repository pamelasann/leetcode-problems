// Last submission: 11/26/2023, 10:51:01 PM
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> results(nums.size(), 1);

        // compute product of left elements
        int leftProduct = 1;
        for(int i = 0; i < nums.size(); i++) {
            results[i] *= leftProduct;
            leftProduct *= nums[i];
        }

        // compute product of right elements
        int rightProduct = 1;
        for(int i = nums.size() - 1; i >= 0; i--) {
            results[i] *= rightProduct;
            rightProduct *= nums[i];
        }
        return results;
    }
};