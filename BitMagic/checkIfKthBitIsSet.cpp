class Solution
{
    public:
    bool checkKthBit(int n, int k){
        n = n>>k;
        return (n & 1) == 1;
    }
};
// Method : 2
class Solution
{
    public:
    bool checkKthBit(int n, int k){
        return !( (n & 1<<k) == 0 );
    }
};
