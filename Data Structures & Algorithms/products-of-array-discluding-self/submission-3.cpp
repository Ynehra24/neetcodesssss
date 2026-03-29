class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int t = 0;
        vector<int>ans(nums.size(), 0);
        int zcount = 0;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                zcount++;
            }
        }
        if(zcount == nums.size()){
            return ans;
        }
        // if there is a zero in the nums array
        if(find(nums.begin(), nums.end(), t) != nums.end()){
            int prod = 1;
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] != 0){
                    prod *= nums[i];
                }
            }
            for(int i = 0; i < nums.size(); i++){
                if(nums[i] != 0){
                    continue;
                }
                else if(nums[i] == 0 && zcount == 1){
                    ans[i] = prod;
                }
                else if(nums[i] == 0 && zcount > 1){
                    ans[i] = 0;
                }
            }

            return ans;
        }
        int prod = 1;
        for(int i = 0; i < nums.size(); i++){
            prod *= nums[i];
        }

        for(int i = 0; i < nums.size(); i++){
            ans[i] = prod/nums[i];
        }

        return ans;
    }
};
