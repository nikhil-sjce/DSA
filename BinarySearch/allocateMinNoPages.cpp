class Solution{
    public:
    bool isValid(int arr[], int n, int sum, int m){
        int currSum = 0;
        int students = 1;
        for(int i=0;i<n;i++){
            currSum += arr[i];
            if(currSum > sum){
                students++;
                currSum = arr[i];
            }
            if(students > m)
                return false;
        }
        return true;
    }
    int findPages(int arr[], int n, int m){
        int start = 0, end = 0, ans = -1;
        start = *max_element(arr, arr+n);
        end = accumulate(arr, arr+n, end);
        while(start <= end){
            int mid = start + (end - start)/2;
            if(isValid(arr, n, mid, m)){
                ans = mid;
                end = mid - 1;
            }
            else 
                start = mid + 1;
        }
        return ans;
    }
};