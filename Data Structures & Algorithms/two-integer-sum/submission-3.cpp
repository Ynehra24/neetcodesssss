class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        /* map<int, int>m;
        for(int i = 0; i < nums.size(); i++){
            if(m.find(target - m[i])){
                return [m[nums[i]], m[target - nums[i]]];
            }
            m[nums[i]] = i;
        }
        return [-1, -1]; */

        for(int i = 0; i < nums.size(); i++){
            for(int j = nums.size() - 1; j >= 0; j--){
                if(nums[i] + nums[j] == target && i != j){
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
                else{
                    continue;
                }
            }
        }
        return ans;
    }
};
