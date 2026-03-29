class Solution {
public:

    string encode(vector<string>& strs) {
       string s;
       for(int i = 0; i < strs.size(); i++)
       {
            s += strs[i] + '~';
       }
       return s;
    }

    vector<string> decode(string s) {
    vector<string> b;
    string ans = "";
    for (char c : s) {
        if (c == '~') {
            b.push_back(ans);
            ans = ""; 
        } else {
            ans += c;
        }
    }
    return b;
}
};
