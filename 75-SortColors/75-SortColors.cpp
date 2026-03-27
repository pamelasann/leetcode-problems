// Last submission: 11/23/2023, 1:44:55 PM
class Solution {
public:
    void swap(int& num1, int& num2) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    };
    void sortColors(vector<int>& nums) {
        for(int i = 0; i < nums.size(); i++) {
            // (j < nums.size() - i - 1) due to nums[j+1]
            for(int j = 0; j < nums.size() - i - 1; j++) {
                if(nums[j] > nums[j+1])
                    swap(nums[j],nums[j+1]);
            }
        }
    }
};