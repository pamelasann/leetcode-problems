// Last submission: 11/23/2023, 12:47:35 PM
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double median;
        for(int i = 0; i < nums2.size(); i++) // O(m)
            nums1.push_back(nums2[i]);
        sort(nums1.begin(), nums1.end()); // O((n+m)log(n+m))
        int mid = nums1.size() / 2;
        if(nums1.size() % 2 != 0)
            return nums1[mid];
        else {
            median = (nums1[mid - 1] + nums1[mid]) / 2.0;
            return median;
        }
        return -1.0; // error
    }
};