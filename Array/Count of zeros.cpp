class Solution{   
public:
    int countZeroes(int arr[], int n) {
        // code here
        int low=0;
        int high=n-1;
        int count=0;
        while(low<=high){
            int mid=(low+high)>>1;
            if(arr[mid]==1)
                low=mid+1;
            else if(arr[mid]==0){
                count++;
                high--;
            }
        }
        return count;
    }
};
