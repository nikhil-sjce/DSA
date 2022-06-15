class Solution
{
    public:
    //Function to swap odd and even bits.
    unsigned int swapBits(unsigned int n){
    	int even = (n & 0xAAAAAAAA),  odd = (n & 0x55555555);
        return (odd << 1) | (even >> 1);
    }
};