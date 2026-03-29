class Solution {
public:

    bool check_anagram(string s1, string s2)
    {
        if(s1.size() != s2.size())
        {
            return false;
        }

        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());

        return s1 == s2;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    vector<vector<string>> vs;
    vector<bool> visited(strs.size(), false); 
    
    for (int i = 0; i < strs.size(); i++) {
        if (visited[i]) continue;  
        
        vector<string> temp;
        temp.push_back(strs[i]);
        visited[i] = true;

        
        for (int j = i + 1; j < strs.size(); j++) {
            if (!visited[j] && check_anagram(strs[i], strs[j])) {
                temp.push_back(strs[j]);
                visited[j] = true; 
            }
        }

        vs.push_back(temp);
    }

    return vs;
}

};
