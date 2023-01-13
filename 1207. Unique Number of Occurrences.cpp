class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> m;
        set<int> s;
        for (auto i : arr) m[i]++;
        for (auto it : m) s.insert(it.second);
        return m.size() == s.size();
    }
};