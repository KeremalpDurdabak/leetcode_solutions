class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> result;
        int k = 0;
        for(int i = 0; i< n; i++){
            int x = n-(n-k);
            int y = n+i;
            result.push_back(nums.at(x));
            result.push_back(nums.at(y));
            k++;
        }
        return result;
    }
};