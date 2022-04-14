class Solution {
public:
    int kthGrammar(int n, int k) {
        if( (n==1 && k==1) || (n==2 && k==1))
            return 0;
        if(n==2 && k==2)
            return 1;
        int middle = (pow(2,n-1)/2);
        if(k > middle)
            return !kthGrammar(n-1, k-middle);
        else
            return kthGrammar(n-1, k);
    }
};