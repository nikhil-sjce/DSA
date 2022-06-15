class Solution
{
    public:
    //Function to find position of first set bit in the given number.
    unsigned int getFirstSetBit(int n){
        if(n>=1)
            return log2(n & ~(n-1)) + 1;
        else
            return 0;
    }
};