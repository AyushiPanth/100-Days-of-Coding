class Solution {
public:
    vector<int> calc(vector<int> r) {
        vector<int> ans;
        ans.push_back(r[0]);
        for(int i = 0; i < r.size() - 1; i++) {
        ans.push_back(r[i] + r[i + 1]);
        }
        ans.push_back(r[r.size() - 1]);
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        vector<int> each;
        each.push_back(1);
        answer.push_back(each);
        if(numRows == 1)
            return answer;
        each.push_back(1);
        answer.push_back(each);
        for(int i = 3; i <= numRows; i++) {
            each = calc(each);
            answer.push_back(each);
        }
        return answer;
    }
};
