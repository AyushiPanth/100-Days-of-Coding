class Solution {
public:
    int find(int node, int arr[]) {
        if(arr[node] == node)
            return node;
        return find(arr[node], arr);
    }
    
    void group(int x, int y, int arr[]) {
        x = find(x, arr);
        y = find(y, arr);
        arr[y] = x;
    }
    
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int s = edges.size();
        int arr[s + 1];
        for(int i = 1; i <= s; i++)
            arr[i] = i;
        for(auto i : edges) {
            if(find(i[0], arr) == find(i[1], arr))
                return i;
            group(i[0], i[1], arr);
        }        
    vector<int> empty;
    return empty;
    }
};
