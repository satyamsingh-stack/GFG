// Expected Time Complexity: O(n.Logn)
// Expected Auxiliary Space: O(n + m)


vector<int> mergeHeaps(vector<int> &a, vector<int> &b, int n, int m) {
        priority_queue<int,vector<int>> maxheap1;
        for(int i=0;i<n;i++)
            maxheap1.push(a[i]);
    	for(int i=0;i<m;i++)
            maxheap1.push(b[i]);
        vector<int> ans;
        while(maxheap1.empty()==false){
        	ans.push_back(maxheap1.top());
        	maxheap1.pop();
    	}
        return ans;
    }
