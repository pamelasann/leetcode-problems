// Last submission: 11/23/2023, 12:23:01 PM
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resultIndex; // store indexes
        unordered_map<int, int> mp; // hash table

        for(int i = 0; i < nums.size(); i++){
            // if (target - nums[i]) is not found, add it to mp
            if(mp.find(target - nums[i]) == mp.end())
                mp[nums[i]] = i;
            else {
                // found (target - nums[i]) and nums[i]
                // such that (target - nums[i]) + nums[i] = target
                resultIndex.push_back(mp[target - nums[i]]);
                resultIndex.push_back(i);
                return resultIndex;
            }
        }
        return resultIndex;
    }
};