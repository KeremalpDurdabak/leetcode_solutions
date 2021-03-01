class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int enumIndex = toEnum(ruleKey);
        int count = 0;
        for(vector<string> v : items){
            if(v[enumIndex] == ruleValue){
                count++;
            }
        }
        return count;
    }
    
      int toEnum(string ruleKey){
        return ruleKey == "type" ? 0 : ruleKey == "color" ? 1 : ruleKey == "name" ? 2 : -1;  
    }
};