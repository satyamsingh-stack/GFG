class Solution {
  public:
    // Function to return the count of the number of elements in
    // the intersection of two arrays.
    int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        set<int> st;
        int count=0;
        for(int i=0;i<n;i++)
            st.insert(a[i]);
        for(int i=0;i<m;i++){
            if(st.find(b[i])!=st.end()){
                count++;
                st.erase(b[i]);
            }
        }
        return count;
    }
};
