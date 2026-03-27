// Last submission: 11/27/2023, 12:58:39 PM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int nonZeroPointer = 0; // pointer from beginning
        for(int i = 0; i < nums.size(); i++) {
            // if non zero number found, copy number to beginning
            if(nums[i] != 0) {
                nums[nonZeroPointer] = nums[i];
                nonZeroPointer++; // move pointer
            }
        }
        // fill with zeros rest of vector
        while(nonZeroPointer < nums.size()) {
            nums[nonZeroPointer] = 0;
            nonZeroPointer++;
        }
    }
};