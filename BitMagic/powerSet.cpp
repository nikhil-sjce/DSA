class Solution{
	public:
		vector<string> AllPossibleStrings(string s){
		    int n = s.length();
		    int p = pow(2, n);
		    vector<string>ans;
		    for(int counter = 0 ; counter < p ; counter++){
		        string temp = "";
		        for(int j = 0 ; j < n ; j++){
		            if( (counter & (1<<j) )!= 0){
		                temp.push_back(s[j]);
		            }
		        }
                ans.push_back(temp);		        
		    }
		    ans.erase(ans.begin());
		    sort(ans.begin(), ans.end());
		    return ans;
		}
};