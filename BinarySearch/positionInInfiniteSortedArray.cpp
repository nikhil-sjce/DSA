class solution {
    int binarySearch(int arr[], int start, int end, int k){
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == k)
                return mid;
            else if(arr[mid] < k)
                start = mid + 1;
            else if(arr[mid] > k)
                end = mid - 1;
        }
        return -1;
    }
    int findElement(int arr[], int k){
        int start = 0, end = 1;
        while(k > arr[end]){
            start = end;
            end = end*2;
        }
        int answer = binarySearch(arr, start, end, k);
        return answer;
    }
};