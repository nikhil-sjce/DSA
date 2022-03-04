class Solution {
public:
    void merge(vector<int>& nums, int l, int mid, int r){
        int i = l;
        int j = mid+1;
        int k = l;
        vector<int>b(nums.size());
        while(i<=mid && j<=r){
            if(nums[i]<nums[j])
                b[k++] = nums[i++];
            else
                b[k++] = nums[j++];
        }
        if(i == mid+1){
            while(j<=r)
                b[k++] = nums[j++];
        }else{
            while(i<=mid)
                b[k++] = nums[i++];
        }
        for(int x = l;x<=r;x++)
            nums[x] = b[x];
    }
    void mergeSort(vector<int>& nums, int l, int r){
        if(l<r){
            int mid = (l+r)/2;
            mergeSort(nums, l, mid);
            mergeSort(nums, mid+1, r);
            merge(nums, l, mid, r);
        }else
            return;
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};