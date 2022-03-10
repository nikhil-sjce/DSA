class Solution{
    public:
    string minWindow(string s, string p){
        unordered_map<char,int>mp;
        int i , j , mini , maxi , ans=INT_MAX , count=0;
        string res="";
        for(i=0;i<p.length();i++){
            mp[p[i]]++;
        }
        i=0 , j=0 , count=mp.size() ;
        while(j<s.length()){
            if(mp.find(s[j])!=mp.end()){
                mp[s[j]]--;
            if(mp[s[j]]==0)
                count--;
            }
            while(count==0){
                if(mp.find(s[i])!=mp.end()){
                    mp[s[i]]++;
                    if(mp[s[i]]>0)
                        count++;
                    if(ans>(j-i+1)){
                        ans = j-i+1;
                        mini = i;
                        maxi = j;
                    }
                }
                i++;
            }
            j++;
        }
       /* for(i=mini;i<=maxi;i++){
            res = res + s[i];
        }
        if(ans==INT_MAX){
            return "";
        }
        else{
            return res;
        }
        */
         return (ans==INT_MAX)?"":s.substr(mini,ans);
    }
};