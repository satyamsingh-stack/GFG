int BSL(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(arr[mid]>x)
            high=mid-1;
        else
            low=mid+1;
    }
    if(high<0 || arr[high]!=x)  return -1;
    return high;
}
int BSF(int arr[],int n,int x){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)>>1;
        if(arr[mid]<x)
            low=mid+1;
        else
            high=mid-1;
    }
    if(low==n || arr[low]!=x)  return -1;
    return low;
}
vector<int> find(int arr[], int n , int x )
{
    // code here
    vector<int> ans(2,-1);
    ans[0]=BSF(arr,n,x);
    ans[1]=BSL(arr,n,x);
    return ans;
}
