class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;
        vector<vector<string>> result;
        int count = 0;
        for(int i=0; i<size(strs); i++){
            string key = strs[i];
            sort(key.begin(), key.end());
            groups[key].push_back(strs[i]);
        }
        for(auto& g: groups){
            result.push_back(g.second);
        }
        return result;
    }
};
