class Solution{
public:	
	vector<int> kLargest(int arr[], int n, int k) {
	    priority_queue<int,vector<int>,greater<int>> minheap;
	    for(int i=0;i<k;i++)
	        minheap.push(arr[i]);
	    vector<int> ans;
	    for(int i=k;i<n;i++){
	        if(minheap.top()>arr[i])
	            continue;
	        else{
	            minheap.pop();
	            minheap.push(arr[i]);
	        }
	    }
	    while(minheap.empty()==false){
	        ans.push_back(minheap.top());
	        minheap.pop();
	    }
	    reverse(ans.begin(),ans.end());
	    return ans;
	}

};
