class Solution {
public:
    int balancedStringSplit(string s) {
        int Lcount = 0;
        int Rcount = 0;
        int total = 0;
        for(auto i : s) {
            if(i == 'L') 
                Lcount++;
            if(i == 'R')
                Rcount++;
            if(Lcount == Rcount) {
                total++;
                Lcount = 0;
                Rcount = 0;
            }
        }
        return total;
    }
};
