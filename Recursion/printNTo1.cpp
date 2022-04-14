class Solution
{
public:
    void printTill1(int N){
        if(N==0)
            return;
        cout<<N<<" ";
        printTillN(N-1);
    }
};