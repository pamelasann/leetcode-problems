// Last submission: 1/8/2026, 10:28:40 PM
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int nums1_mid = m - 1;
        int nums1_right = m + n - 1;
        int nums2_right = n - 1;
        while(nums2_right >= 0) {
            if(nums1_mid >= 0 && nums1[nums1_mid] > nums2[nums2_right]) {
                nums1[nums1_right] = nums1[nums1_mid];
                nums1_mid--;
            } else {
                nums1[nums1_right] = nums2[nums2_right];
                nums2_right--;
            }
            nums1_right--;
        }
    }
};