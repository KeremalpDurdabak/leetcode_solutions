class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> greatest;
        bool isGreatest;
        int max = candies.at(0);
        int size = candies.size();
        for(int i = 1; i<size; i++){
            if(max < candies.at(i)){
                max = candies.at(i);
            }
        }
        
        for(int i = 0; i< size; i++){
            candies.at(i) += extraCandies;
            isGreatest = candies.at(i) >= max ? true : false;
            greatest.push_back(isGreatest);
        }
        
        return greatest;
    }
};