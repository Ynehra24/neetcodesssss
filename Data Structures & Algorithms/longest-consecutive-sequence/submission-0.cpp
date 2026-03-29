class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
    if (nums.empty()) return 0;

    sort(nums.begin(), nums.end());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());  // remove duplicates

    map<int, vector<int>> v;
    int i = 0;

    while (i < nums.size()) {
        vector<int> temp;
        temp.push_back(nums[i]);
        int next = nums[i] + 1;

        // Keep adding consecutive numbers
        for (int j = i + 1; j < nums.size(); j++) {
            if (nums[j] == next) {
                temp.push_back(nums[j]);
                next++;
            } else if (nums[j] > next) {
                break;
            }
        }

        v[i] = temp;
        i++;
    }

    int ma = 0;
    for (auto it = v.begin(); it != v.end(); ++it) {
        if (it->second.size() > ma) {
            ma = it->second.size();
        }
    }

    return ma;
}

};
