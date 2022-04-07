class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int> maxhp;
        int i=0;
        while(i<=r){
            maxhp.push(arr[i]);
            if(maxhp.size() > k)
                maxhp.pop();
            i++;
        }
        return maxhp.top();
    }
};