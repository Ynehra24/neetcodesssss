class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>v1;
        vector<char>v2;

        for(auto &c : s){
            if(isalnum(c)){
                v1.push_back(tolower(static_cast<unsigned char>(c)));
            }
        }
        v2 = v1;
        reverse(v2.begin(), v2.end());

        return v1 == v2;
    }
};
