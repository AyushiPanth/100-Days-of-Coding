class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        int OneRunningSum = 0;
        for(int i = 0; i < nums.size(); i++) {
            OneRunningSum += nums[i];
            sum.push_back(OneRunningSum);
        }
        return sum;
    }
};
