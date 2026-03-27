// Last submission: 11/23/2023, 1:18:33 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right) {
            int mid = (left + right) / 2; // compute middle
            if(nums[mid] == target)
                return mid;
            // left to mid is ordered
            if(nums[mid] >= nums[left]) {
                // target between nums[left] and nums[mid]
                if(nums[left] <= target && target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            // left to mid is not ordered
            else {
                // target between nums[mid] and nums[right]
                if(nums[right] >= target && target > nums[mid])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return -1;
    }
};