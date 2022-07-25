class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int BSF(int arr[],int n,int x){
	    int low=0,high=n-1;
	    while(low<=high){
	        int mid=(low+high)>>1;
	        if(arr[mid]<x)
	            low=mid+1;
	        else
	            high=mid-1;
	    }
	    if(low==n || arr[low]!=x)
	        return -1;
	    return low;
	}
	int BSL(int arr[],int n,int x){
	    int low=0,high=n-1;
	    while(low<=high){
	        int mid=(low+high)>>1;
	        if(arr[mid]>x)
	            high=mid-1;
	        else
	            low=mid+1;
	    }
	    if(high<0 || arr[high]!=x)
	        return -1;
	    return high;
	}
	int count(int arr[], int n, int x) {
	    // code here
	    int a=BSL(arr,n,x);
	    int b=BSF(arr,n,x);
	    if(b==-1)
	        return 0;
	    return a-b+1;
	}
};
