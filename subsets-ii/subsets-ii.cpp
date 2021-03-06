class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int total = 1 << nums.size();
        vector<vector<int>> allsets;
        set<vector<int>> ss;
        for(int i = 0; i < total; i++) {
            vector<int> each;
            for(int j = 0; j < nums.size(); j++) {
                int a = 1 << j;
                if((i & a) != 0)
                    each.push_back(nums[j]);
            }
            vector<int> copy = each;
            sort(copy.begin(), copy.end());
            if(ss.find(copy) == ss.end()) {
                allsets.push_back(each);
                ss.insert(copy);
            }
        }
        return allsets;
    }
};
