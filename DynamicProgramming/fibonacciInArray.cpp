class Solution{
	public:
	bool perfectSquare(long long int k){
	    long long int s = sqrt(k);
	    return (s*s == k);
	}
	bool checkFibonacci(long long n){
	    long long a1 = 5*n*n - 4;
	    long long a2 = 5*n*n + 4;
	    return perfectSquare(a1) || perfectSquare(a2);
	}
	int checkFib(long long arr[], int n){
	    int count = 0;
	    for(int i=0;i<n;i++){
	        if(checkFibonacci(arr[i]))
	            count++;
	    }
	    return count;
	}

};