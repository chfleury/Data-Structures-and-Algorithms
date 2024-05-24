class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hashMap;
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (hashMap.find(nums[i]) != hashMap.end())
            {
                ans.push_back(hashMap[nums[i]]);
                ans.push_back(i);
                break;
            }

            hashMap[target - nums[i]] = i;
        }
        return ans;
    }
};