int bitonicArray(int arr[], int n) {
	    int start = 0, end = n;
	    while(start <= end){
	        int mid = start + (end - start)/2;
	        if( mid!=0 && mid!=n-1 ){
	            if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1])
	                return arr[mid];
	            else if(arr[mid] < arr[mid-1])
	                end = mid-1;
	            else if(arr[mid] < arr[mid+1])
	                start = mid+1;
	        }
	        else if(mid==0 && n!=1){
	            if(arr[0] > arr[1])
	                return arr[0];
	            else return arr[1];
	        }
	        else if(mid==n-1 && n!=1){
	            if(arr[n-1] > arr[n-2])
	                return arr[n-1];
	            else return arr[n-2];
	        }
	    }
	}

int binarySearch(int arr[], int start, int end,  int k){
    while(start <= end){
        int mid = start + (end - start)/2;
        if(arr[mid] == k)
            return arr[mid];
        else if(arr[mid] < k)
            start = mid + 1;
        else if(arr[mid] > k)
            end = mid - 1;
    }
    return -1;
}
int solve(int* arr, int n, int k) {
    int bp = bitonicArray(arr, n);
    int i1 = binarySearch(arr, 0, bp, k);
    int i2 = binarySearch(arr, bp+1, n-1, k);
    if(i1==-1 && i2==-1)
        return -1;
    else if(i1==-1)
        return i2;
    else if(i2==-1)
        return i1;
}

