class Solution{
public:
	int search(string pat, string txt) {
	    int n = txt.length(), i = 0, j = 0, count = 0, k1 = pat.length(), ans = 0;
	    unordered_map<char,int>um;
	    for(; i<pat.length() ; i++)
	        um[pat[i]]++;
	    int k2 = um.size();
	    i = 0;
	    while(j < n){
	        um[txt[j]]--;
	        if(um[txt[j]] == 0)
	            count++;
	        if(j-i+1 < k1)
	            j++;
	        else if(j-i+1 == k1){
	            if(count == k2)
	                ans++;
	            i++ ; j++ ;
	            um[txt[i-1]]++;
	            if(um[txt[i-1]] == 1)
	                count--;
	        }
	    }
	    return ans;
	}

};