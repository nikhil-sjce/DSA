// Method 1
class Solution{
    public:
    string countSort(string s){
        int a[26] = {0};
        string ans="";
        for(int i=0;i<s.length();i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(a[i]!=0){
                int temp = a[i];
                while(temp--){
                    ans+=char(i + 'a');
                }
            }
        }
        return ans;
    }
};

// Method 2
class Solution{
    public:
    string countSort(string s){
        map<char,int>m;
        string ans="";
        for(int i=0;i<s.length();i++)
            m[s[i]]++;
        for(auto x : m){
            if(x.second!=0){
                int temp = x.second;
                while(temp--)
                    ans+=x.first;
            }
        }
        return ans;
    }
};


