class Solution {
public:

    bool anagramcheck(string s, string t){

        if(s.size() != t.size()){
            return false;
        }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        return s == t;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>vs;
        vector<bool> visited(strs.size(), false);
        for(int i = 0; i < strs.size(); i++){
            vector<string>temp;

            if (visited[i]) continue;  

            temp.push_back(strs[i]);
            visited[i] = true;

            for(int j = i + 1; j < strs.size(); j++){
                if(anagramcheck(strs[i], strs[j]) && visited[j] != true){
                    temp.push_back(strs[j]);
                    visited[j] = true;
                }
            }

            vs.push_back(temp);
        }

        return vs;
    }
};
