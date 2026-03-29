class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<int> ans;
    
    // If the input has only one element, return the same element
    if (nums.size() == 1) {
        return nums;
    }
    
    // If all elements are the same, just return the first element
    else if (nums.size() > 1 && count(nums.begin(), nums.end(), nums[0]) == nums.size()) {
        ans.push_back(nums[0]);
        return ans;
    } 
    else {
        // Sort the input vector
        sort(nums.begin(), nums.end());
        
        // Create a map to store the frequency of each element
        unordered_map<int, int> m;
        for (auto& i : nums) {
            m[i]++;
        }

        vector<pair<int, int>>vp(m.begin(), m.end());
        sort(vp.begin(), vp.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; // Sort by frequency (second value)
        });

        // Extract the top k frequent elements
        int cnt = 0;
        for (int i = 0; i < vp.size(); i++) {
            if (cnt < k) {
                ans.push_back(vp[i].first);
                cnt++;
            } else {
                break;
            }
        }
    }

    return ans;
}
};