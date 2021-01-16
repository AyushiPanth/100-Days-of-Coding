class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int low = 0;
        int high = arr.size();
        while(low < high) {
            int mid = low + (high - low) / 2;
            if(arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1])
                return mid;
            if(arr[mid + 1] > arr[mid])
                low = mid;
            else if(arr[mid - 1] > arr[mid])
                high = mid;
        }
        return high;
    }
};
