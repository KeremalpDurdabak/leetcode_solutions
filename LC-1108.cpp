class Solution {
public:
    string defangIPaddr(string address) {
        int size = address.size();
        string result = "";
        string s = "";
        int start = 0;
        for(int i = 0; i< size; i++){
            s = address.at(i);
            if(s.compare(".") == 0){
                result += address.substr(start,(i-start)) + "[.]";
                start = i+1;
            }
        }
        result += address.substr(start,size);
        return result;
    }
};