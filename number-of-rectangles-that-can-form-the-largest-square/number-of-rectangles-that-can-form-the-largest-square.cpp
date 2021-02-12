class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        map<int, int> mp;
        int side;
        for(int i = 0; i < rectangles.size(); i++) {
            side = min(rectangles[i][0], rectangles[i][1]);
            mp[side]++;
        }
        int maxlen = 0;
        int size = 0;
        for(auto i : mp) {
           if(size < i.first) {
               maxlen = i.second;
           }
        }
        return maxlen;
    }
};
​
​
