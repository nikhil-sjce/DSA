class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        int xori = 0;
        for(int i=0;i<n;i++){
            xori = xori ^ arr[i];
        }
        return xori;
    }
};