class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> each;
        each.push_back(1);
        if(rowIndex == 0)
            return each;
        each.push_back(1);
        
        if(rowIndex == 1)
            return each;
        return calc(each, 1, rowIndex);
    }
    vector<int> calc(vector<int> r, int c, int row) {
        vector<int> ans;
        ans.push_back(r[0]);
        for(int i = 0; i < r.size() - 1; i++) {
        ans.push_back(r[i] + r[i + 1]);
        }
        ans.push_back(r[r.size() - 1]);
        c++;
        if(c == row)
            return ans;
        else
            return calc(ans, c, row);
        
    }
    
};
