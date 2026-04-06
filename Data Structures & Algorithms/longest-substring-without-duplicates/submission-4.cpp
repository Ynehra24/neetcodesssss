class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int maxlen = 0;
        set<char>ss;
        for(int r = 0; r < s.size(); r++){
            if(ss.find(s[r]) != ss.end()){
                while(ss.find(s[r]) != ss.end()){
                    ss.erase(s[l]);
                    l++;
                }
            }
            ss.insert(s[r]);
            int cnt = r - l + 1;
            maxlen = max(maxlen, cnt);
        }
        return maxlen;
    }
};
