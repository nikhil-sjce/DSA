class Solution{
public:	
    int firstOccurrence(int arr[], int n, int x){
        int start = 0, end = n-1;
        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid] == x){
                if(arr[mid] == arr[mid-1] && mid-1 >=0)
                    end = mid-1;
                else if( (arr[mid] != arr[mid-1] && mid-1>=0 ) || mid == 0)
                    return mid;
            }
            else if(arr[mid] < x)
                start = mid + 1;
            else if(arr[mid] > x)
                end = mid - 1 ;
        }
        return -1;
    }
    int lastOccurence(int arr[], int n, int x){
        int start = 0, end = n-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == x){
                if(arr[mid] == arr[mid+1] && mid+1 < n)
                    start = mid + 1;
                else if( (arr[mid] != arr[mid+1] && mid+1<n ) || mid == n-1 )
                    return mid;
            }
            else if(arr[mid] < x)
                start = mid + 1;
            else if(arr[mid] > x)
                end = mid - 1 ;
        }
        return -1;
    }
	int count(int arr[], int n, int x) {
	    int first = firstOccurrence(arr, n, x);
	    int last = lastOccurence(arr, n, x);
	    if(first == -1 || last == -1)
	        return 0;
	    else
	        return (last - first + 1);
	}
};