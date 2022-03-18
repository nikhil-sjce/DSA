class solution{
    int minDiff(int arr[], int k, int n){
        int start = 0, end = n-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == k)
                return 0;
            else if(arr[mid] < k)
                start = mid + 1;
            else if(arr[mid] > k)
                end = mid - 1;
        }
        return min(abs(arr[start] - k), abs(arr[end] - k));
    }
};