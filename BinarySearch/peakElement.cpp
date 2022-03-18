class Solution{
    public:
    int peakElement(int arr[], int n){
        int start = 0, end = n-1;
        while(start<=end){
            int mid = start + (end - start)/2;
            if(mid!=0 && mid!=n-1){
                if(arr[mid] >= arr[mid+1] && arr[mid] >= arr[mid-1])
                    return mid;
                else if(arr[mid] < arr[mid+1])
                    start = mid + 1;
                else if(arr[mid] < arr[mid-1])
                    end = mid - 1;
            }
            else if(mid==0 && n!=1){
                if(arr[0] > arr[1])
                    return 0;
                else return 1;
            }
            else if(mid==n-1 && n!=1){
                if(arr[n-1] > arr[n-2])
                    return n-1;
                else
                    return n-2;
            }
            else if(n==1)
                return 0;
        }
    }
};