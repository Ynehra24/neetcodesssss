class Solution {
public:

    string encode(vector<string>& strs) {
        string ans = "";
        for(auto &i : strs){
            ans += i + '.';
        }

        return ans;
    }

    vector<string> decode(string s) {
        vector<string>final;
        string word;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '.'){
                final.push_back(word);
                word = "";
            }
            else{
                word = word + s[i];
            }
        }

        if(!word.empty()){
            final.push_back(word);
        }
        return final;
    }
};
