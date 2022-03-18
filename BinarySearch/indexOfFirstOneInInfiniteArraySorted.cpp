class solution{  

    int firstOccurence(int arr[], int start, int end){
        while(start<=end){
            int mid = start + (end - start)/2;
            if(arr[mid] == 1){
                if( ( arr[mid] == arr[mid-1] ) && mid-1 >=0)
                    end = mid -1;
                else if( ((arr[mid] != arr[mid-1]) && mid-1>=0) || mid==0)
                    return mid;
            }
            else if(arr[mid] < 1)
                start = mid + 1;
            else if(arr[mid] > 1)
                end = mid -1 ;
        }
        return -1;
    } 

    int firstOne(int arr[]){
        int start = 0, end = 1;
        while(1 > arr[end]){
            start = end;
            end = end*2;
        }
        int answer = firstOccurence(arr, start, end);
        return answer;
    }

};