class Solution{
    public:
    int firstIndex(int a[], int n) 
    {
        // Your code goes here
        int low=0,high=n-1;
        while(low<=high){
            int mid=(low+high)>>1;
            if(a[mid]<1)
                low=mid+1;
            else
                high=mid-1;
        }
        if(low==n && a[low]!=1) return -1;
        return low;
    }
};
