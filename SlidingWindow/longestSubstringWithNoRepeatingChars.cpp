class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0)
            return 0;
        unordered_map<char,int>um;
        int i = 0, j = 0, maxLength = INT_MIN;
        while(j<s.length()){
            um[s[j]]++;
            if(um.size() == j-i+1){
                if(maxLength < j-i+1)
                    maxLength = j-i+1;
                j++;
            }
            else if(um.size() !=j-i+1){
                while(um.size() !=j-i+1){
                    um[s[i]]--;
                    if(um[s[i]] == 0)
                        um.erase(s[i]);
                    i++;
                }
                j++;
            }
        }
        if(maxLength == INT_MIN)
            return -1;
        else
            return maxLength;
    }
};