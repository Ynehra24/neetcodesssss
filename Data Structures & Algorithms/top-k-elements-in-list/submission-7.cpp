class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int>m;
        vector<int>v;
        int c = 0;
        for(int &i : nums){
            m[i]++;
        }
        vector<pair<int, int>>vt(m.begin(), m.end());

        sort(vt.begin(), vt.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second; 
        });

        for(int i = 0; i < vt.size(); i++){
            if(c < k){
                v.push_back(vt[i].first);
                c++;
            }
        }

        return v;
    }
};