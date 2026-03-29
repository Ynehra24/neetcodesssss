class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>haw;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = nums.size() - 1; j >= 0; j--)
            {
                if(nums[i] + nums[j] == target && i != j)
                {
                    haw.push_back(i);
                    haw.push_back(j);
                    return haw;
                }
            }
        }
        return haw;
    }
};