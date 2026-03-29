class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        map<int, int>m;
        for(int i = 0; i < nums.size(); i++){
            m[nums[i]]++;
        }

        vector<pair<int, int>>temp(m.begin(), m.end());
        sort(temp.begin(), temp.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        vector<int>ans;
        for(auto it = temp.begin(); it != temp.end(); it++){
            if(k != 0){
                ans.push_back(it -> first);
                k = k - 1;
            }
        }
        return ans;
    }
};
