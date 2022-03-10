
class Solution{
  public:
    int longestKSubstr(string s, int k) {
        unordered_map<char,int>um;
        int i=0, j=0, maxLength = INT_MIN;
        while(j<s.length()){
            um[s[j]]++;
            if(um.size() < k)
                j++;
            else if(um.size() == k){
                if(maxLength < j-i+1)
                    maxLength = j-i+1;
                j++;
            }
            else if(um.size()>k){
                while(um.size() > k){
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