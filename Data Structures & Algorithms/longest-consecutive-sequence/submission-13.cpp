class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<pair<int, int>>ans;

        if(nums.size() == 0){
            return 0;
        }

        for(int i = 0; i < nums.size() - 1; i++){
            ans.push_back(make_pair(nums[i], nums[i + 1]));
        }

        int cnt = 1;
        int maxc = 1;

        for(auto &it : ans){
            if(it.first + 1 == it.second){
                cnt++;
            }
            else if(it.first == it.second){
                continue;
            }
            else{
                maxc = max(cnt, maxc); // update max
                cnt = 1; // restart count
            }
            maxc = max(maxc, cnt);
        }
        return maxc;
    }
};
