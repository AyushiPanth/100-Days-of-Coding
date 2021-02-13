class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int count = 0;
        for(int i = 0; i < strs[0].size(); i++) {
            vector<char> v;
            for(int j = 0; j < strs.size(); j++) {
                v.push_back(strs[j][i]);
            }
            if(is_sorted(v.begin(), v.end()) == false)
                count++;
        }
        return count;
    }
};
