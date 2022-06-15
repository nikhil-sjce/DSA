class Solution{
    public:
    static bool comp(int n1, int n2){
        int c1 = 0, c2 = 0;
        while(n1){
            n1 = n1 & (n1-1);
            c1++;
        }
        while(n2){
            n2 = n2 & (n2-1);
            c2++;
        }
        return c1>c2;
    }
    void sortBySetBitCount(int arr[], int n){
        stable_sort(arr, arr+n, comp);
    }
};