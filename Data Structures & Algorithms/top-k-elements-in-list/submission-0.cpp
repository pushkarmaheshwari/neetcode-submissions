class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for(int i=0; i<size(nums); i++){
            count[nums[i]]++;
        }
        vector<pair<int, int>> list;
        for(auto &p: count){
            list.push_back({p.second, p.first});
        }
        vector<int> result;
        sort(list.rbegin(), list.rend());
        for(int i=0; i<k; i++){
            result.push_back(list[i].second);
        }
        return result;
    }
};
