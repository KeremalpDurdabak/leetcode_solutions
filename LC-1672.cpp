class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(vector<int> c : accounts){
            int cWealth = std::accumulate(c.begin(),c.end(), 0);
            maxWealth = max(maxWealth, cWealth);
        }
        return maxWealth;
    }
};
