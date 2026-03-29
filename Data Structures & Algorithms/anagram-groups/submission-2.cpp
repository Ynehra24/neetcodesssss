class Solution {
public:
    bool isanagram(string s, string t){
        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        vector<bool>visited(strs.size(), false);
        for(int i = 0; i < strs.size(); i++){
            if(visited[i] == true){
                continue;
            }
            vector<string>temp;
            temp.push_back(strs[i]);
            visited[i] = true;
            for(int j = i + 1; j < strs.size(); j++){
                if(isanagram(strs[i], strs[j]) && visited[j] == false){
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
