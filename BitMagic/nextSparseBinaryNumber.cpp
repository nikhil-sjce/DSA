class Solution {
  public:
    bool isSparse(int n){
        return (n & (n<<1)) == 0;
    }
    int nextSparse(int n) {
        while(n){
            if(isSparse(n))
                return n;
            n++;
        }
    }
};