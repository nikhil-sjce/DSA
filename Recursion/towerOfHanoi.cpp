class Solution{
    public:
    long long solve(int n, int from, int to, int aux, long long &count){
        count++;
        if(n==1){
            cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
            return count;
        }
        solve(n-1, from, aux, to, count);
        cout<<"move disk "<<n<<" from rod "<<from<<" to rod "<<to<<endl;
        solve(n-1, aux, to, from, count);
        return count;
    }
    long long toh(int N, int from, int to, int aux) {
        long long count = 0;
        return solve(N, from, to, aux, count); 
    }
};