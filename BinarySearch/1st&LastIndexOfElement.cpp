class solution{ 
    int firstOccurrences(int arr[], int n, int x){
        int start = 0, end = n-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == x){
                if(arr[mid] == arr[mid-1] && mid-1>=0)
                    end = mid -1 ;
                else if( (arr[mid] != arr[mid-1] && mid-1>=0) || mid == 0)
                    return mid;
            }
            else if(arr[mid] < x)
                start = mid + 1;
            else if(arr[mid] > x)
                end = mid - 1;
        }
        return -1;
    }

    int lastOccurrences(int arr[], int n, int x){
        int start = 0, end = n-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(arr[mid] == x){
                if(arr[mid] == arr[mid+1] && mid+1<=n-1)
                    start = mid + 1;
                else if( ( arr[mid] != arr[mid+1] && mid+1<=n-1 ) || mid==n-1)
                    return mid;
            }
            else if(arr[mid] < x)
                start = mid + 1;
            else if(arr[mid] > x)
                end = mid -1;
        }
        return -1;
    }

    vector<int> find(int arr[], int n , int x ){
        vector<int>v;
        int f = firstOccurrences(arr, n, x);
        int l = lastOccurrences(arr, n, x);
        if(l==-1 || f==-1){
            v.push_back(-1);
            v.push_back(-1);
            return v;
        }
        else{
            v.push_back(f);
            v.push_back(l);
            return v;
        }
    }
};