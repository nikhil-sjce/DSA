class Solution{
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b){
        int xori = a ^ b, c = 0;
        while(xori){
            xori = xori & (xori-1);
            c++;
        }
        return c;
    }
};
