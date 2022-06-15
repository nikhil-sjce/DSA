class Solution
{
    public:
    //Function to find the first position with different bits.
    int posOfRightMostDiffBit(int m, int n){
        int xori = m ^ n;
        if(xori >= 1)
            return log2(xori & ~(xori-1)) + 1;
        else 
            return -1;
    }
};