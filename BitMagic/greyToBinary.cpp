class Solution{
    public:
    // function to convert a given Gray equivalent n to Binary equivalent.
    int grayToBinary(int n){
        int xori = n;
        while(n){
            n = n >> 1;
            xori = xori ^ n;
        }
        return xori ;
    }
};
