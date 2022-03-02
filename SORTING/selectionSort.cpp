class Solution
{
    void selectionSort(int a[], int n)
    {
        int i,k,j;
        for(i=0;i<n;i++){
            for(j=k=i;j<n;j++){
                if(a[k]>a[j])
                    k = j;
            }
            swap(&a[i],&a[k]);
       }
    }
};
