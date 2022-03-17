class Solution{
public:	
    // FOR ANTICLOCKWISE RETURN (N-MID)
	int findKRotation(int arr[], int n) {
	    int start = 0, end = n-1;
	    while(start<=end){
	        if(arr[start] <= arr[end])
	            return start;
	        int mid = start + (end - start)/2;
	        int next = (mid+1)%n;
	        int prev = (mid+n-1)%n;
	        if( (arr[mid] <= arr[next]) && (arr[mid] <= arr[prev]))
	            return mid;
	        else if( (arr[mid] >= arr[start]))
	            start = mid + 1;
	        else if( (arr[mid] <= arr[end]))
	            end = mid - 1;
	    }
	}

};
