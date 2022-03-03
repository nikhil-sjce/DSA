class Solution
{
    public:
    void quickSort(int arr[], int low, int high){
        int j;
        if(low<high){
            j = partition(arr, low, high);
            quickSort(arr, low, j);
            quickSort(arr, j+1, high);
        }
    }
    
    public:
    int partition (int arr[], int low, int high){
       int pivot = arr[low];
       int i = low-1;
       int j = high+1;
       do{
           do{i++;}while(arr[i]<pivot);
           do{j--;}while(arr[j]>pivot);
           if(j>i)
            swap(arr[i], arr[j]);
       }while(i<j);
       swap(arr[low], arr[j]);
       return j;
    }
};
