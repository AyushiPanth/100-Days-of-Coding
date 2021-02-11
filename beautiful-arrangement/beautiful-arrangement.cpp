class Solution {
public:
    int count = 0;
    int beautifulCount = 0;
    bool isBeautiful(vector<int> & arrangement) {
        for(int i = 1; i < arrangement.size(); i++) {
            if(arrangement[i] % (i + 1) != 0 && (i + 1) % arrangement[i] != 0)
                return false;
        }
        return true;
    }
    void allPermutations(vector<int> & arrangement, int size, unordered_set<int> &used, int current) {
        if(current == size) {
            count++;
            if(isBeautiful(arrangement)) {
                beautifulCount++;
            }
            return;
        }
        for(int i = 1; i <= size; i++) {
            
            if(used.find(i) != used.end())
                continue;
            if(i % (current + 1) != 0 && (current + 1) % i != 0)
                continue;
            arrangement[current] = i;
            used.insert(i);
            allPermutations(arrangement, size, used, current + 1);
            used.erase(i);
        }
    }
    int countArrangement(int n) {
        vector<int> arrangement(n, 0);
        unordered_set<int> used;
        allPermutations(arrangement, n, used, 0);
        return beautifulCount;
    }
};
    
    
​
