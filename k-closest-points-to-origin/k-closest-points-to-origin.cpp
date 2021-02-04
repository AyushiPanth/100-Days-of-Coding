class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        priority_queue<pair<int, pair<int,int>>> maxHeap;
        for(int i = 0; i < points.size(); i++){
            int len = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pair<int, int> p(points[i][0], points[i][1]);
            pair<int, pair<int,int>> pp(len,p);
            maxHeap.push(pp);
            if(maxHeap.size() > K)
                maxHeap.pop();
        } 
        vector<vector<int>> answer;
        for(int i = 0; i < K; i++, maxHeap.pop())          answer.push_back({maxHeap.top().second.first, maxHeap.top().second.second});
        return answer;
    }
};
