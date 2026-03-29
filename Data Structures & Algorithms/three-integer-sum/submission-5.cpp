class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        /* core logic -> can the sum of the first two or any 2 numbers give me the
        negative of the third? */
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size() - 1; i++){
            int j = i + 1;
            if(nums[i] > 0) break;
            int k = nums.size() - 1;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            while(j < k){
                int summ = nums[i] + nums[k] + nums[j];
                if(summ == 0){
                    ans.push_back({nums[i], nums[j], nums[k]});
                    k--;
                    j++;
                    if(nums[k] == nums[k + 1]){
                        while(j < k && nums[k] == nums[k + 1]){
                            k--;
                        }
                    }
                    if(nums[j] == nums[j - 1]){
                        while(j < k && nums[j] == nums[j - 1]){
                            j++;
                        }
                    }
                }
               else if(summ > 0){
                    k--;
               }
               else if(summ < 0){
                    j++;
               }
            }
        }
        return ans;
    }
};
