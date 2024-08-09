class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> hash;
        for (int i = 0; i < arr.size(); i++) {
            hash[arr[i]]++;
        }

        for (auto i : hash) {
            for (auto j : hash) {
                if (i.first != j.first) {
                    if (i.second == j.second) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};