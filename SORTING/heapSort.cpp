class Solution
{
    // Converting a root into a heap
    public:
    void heapify(int arr[], int n, int i){
        int largest = i;
        int left = 2*i+1;
        int right = 2*i+2;
        if(left<n && arr[left]>arr[largest])
            largest = left;
        if(right<n && arr[right]>arr[largest])
            largest = right;
        if(largest!=i){
            swap(arr[i], arr[largest]);
            heapify(arr, n, largest);
        }
    }

    // builds a heap from an array
    public:
    void buildHeap(int arr[], int n){
        for(int i=n/2 ; i>=0 ; i--)
            heapify(arr, n, i);
    }

    // Applieng heap Sort 
    public:
    void heapSort(int arr[], int n){
        buildHeap(arr, n);
        for(int i=n-1;i>0;i--){
            swap(arr[0], arr[i]);
            heapify(arr, i, 0);
        }
    }
};