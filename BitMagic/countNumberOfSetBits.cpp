class Solution {
  public:
    int setBits(int N) {
        int c = 0;
        while(N){
            if(N & 1 == 1)
                c++;
            N = N >> 1;
        }
        return c;
    }
};
//Method : 2
class Solution {
  public:
    int setBits(int n) {
        int c = 0;
        while(n){
            c++;
            n = n & (n-1);
        }
        return c;
    }
};