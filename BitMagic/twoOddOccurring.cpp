class Solution{
    public:
    vector<int> twoOddNum(int arr[], int n){
        int xori = 0, res1 = 0, res2 = 0;
        for(int i = 0; i<n ; i++){
            xori = xori ^ arr[i];
        }
        int rightSetBit = xori & ~(xori-1);
        for(int i=0;i<n;i++){
            if( (rightSetBit & arr[i]) !=0 )
                res1 = res1 ^ arr[i];
            else
                res2 = res2 ^ arr[i];
        }
        vector<int>answer;
        if(res1 > res2){
            answer.push_back(res1);
            answer.push_back(res2);
        }else{
            answer.push_back(res2);
            answer.push_back(res1);
        }
        return answer;
    }
};