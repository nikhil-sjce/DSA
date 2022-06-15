class Solution{
    public:
    int BinaryToGrey(int n){
        return (n ^ (n>>1));
    }
};
