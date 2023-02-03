void fix_position(int x,stack<int> &st){
    if(st.size()==0 || st.top()<x)
        st.push(x);
    else{
        int a=st.top();
        st.pop();
        fix_position(x,st);
        st.push(a);
    }
}
void reverse(stack<int> &st){
    if(st.size()>0){
        int x=st.top();
        st.pop();
        reverse(st);
        fix_position(x,st);
    }
}
void SortedStack :: sort()
{
   //Your code here
   reverse(s);
}
