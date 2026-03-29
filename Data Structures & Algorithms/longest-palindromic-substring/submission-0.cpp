class Solution {
public:
    bool ispalin(string t){
        string r = t;
        reverse(r.begin(), r.end());
        return r == t;
    }
    string longestPalindrome(string s) {
        int n = s.size();
        if(n == 0){
            return "";
        }
        if(n == 1){
            return s;
        }
        if(ispalin(s)){
            return s;
        }
        if(n == 2 && s[0] == s[1]){
            return s;
        }
        if(n == 2 && s[0] != s[1]){
            return s.substr(0, 1);
        }
        int l, r;
        string ans = "";
        int len = 0;
        for(int i = 0; i < n; i++){
            l = i;
            r = i;
            while(l >= 0 && r < n && s[l] == s[r]){
                if(r - l + 1 > len){
                    len = r - l + 1;
                    ans = s.substr(l, len);
                }
                l--;
                r++;
            }
            l = i;
            r = i + 1;
            while(l >= 0 && r < n && s[l] == s[r]){
                if(r - l + 1 > len){
                    len = r - l + 1;
                    ans = s.substr(l, len);
                }
                l--;
                r++;
            }
        }
        return ans;
    }
};
