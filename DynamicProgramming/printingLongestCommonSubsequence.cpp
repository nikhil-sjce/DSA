string printLCS(string s1, string s2, int x, int y){
    LCS();
    int i = x, j = y;
    string v;
    while(i>0 && j>0){
        if(s1[i-1] == s2[j-1]){
            v.push_back(s1[i-1]);
            i--;
            j--;
        }else if(s1[i-1]!=s2[j-1]){
            if(t[i][j-1] > t[i-1][j])
                j--;
            else
                i--;
        }
    }
    reverse(v.begin(), v.end());
    return v;
}