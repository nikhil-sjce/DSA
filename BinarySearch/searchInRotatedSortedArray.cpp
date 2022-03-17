class Solution{
    public:
    int rotation(int arr[], int n){
        int start = 0, end = n-1;
        while(start <= end){
            if(arr[start] <= arr[end])
                return start;
            int mid = start + (end - start)/2;
            int prev = (mid + n - 1)%n;
            int next = (mid + 1)%n;
            if( (arr[mid] <= arr[next]) && (arr[mid] <= arr[prev]) )
                return mid;
            else if(arr[mid] >= arr[start])
                start = mid + 1;
            else if(arr[mid] <= arr[end])
                end = mid - 1;
        }
    }
    int binarySearch(int arr[], int start, int end, int k){
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid] == k)
                return mid;
            else if(arr[mid] < k)
                start = mid+1;
            else if(arr[mid] > k)
                end = mid-1;
        }
        return -1;
    }
    int search(int A[], int l, int h, int key){
        int pivot = rotation(A, h+1);
        int left = binarySearch(A, l, pivot-1, key);
        int right = binarySearch(A, pivot, h, key);
        if(left==-1 && right==-1)
            return -1;
        else if(left==-1)
            return right;
        else if(right==-1)
            return left;
    }
};