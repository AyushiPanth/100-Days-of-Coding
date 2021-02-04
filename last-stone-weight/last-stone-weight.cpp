class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        make_heap(stones.begin(), stones.end());
        if(stones.size() == 1)
            return stones[0];
        if(stones.size() == 2) {
            if(stones[0] == stones[1])
                return 0;
            else return(max(stones[0], stones[1]) - min(stones[0],stones[1]));
        }
        while(stones.size() > 1) {
            int first = stones.front();
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            int second = stones.front();
            pop_heap(stones.begin(), stones.end());
            stones.pop_back();
            if(first != second) {
                int new_ele = max(first, second) - min(first, second);
                stones.push_back(new_ele);
                push_heap(stones.begin(), stones.end());
            }
        }
        if(stones.size() == 0)
            return 0;
        return stones[0];
    }
};
