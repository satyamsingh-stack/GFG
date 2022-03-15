#include<iostream>
#include<stack>
using namespace std;
bool ismatching(char a,char b){
	return (a=='('&&b==')' || a=='{' && b=='}' || a=='[' && b==']');
}
bool isbalancing(string st){
	stack<char> s;
	for(int i=0;i<st.length();i++){
		if(st[i]=='(' || st[i]=='[' || st[i]=='{')
			s.push(st[i]);
		else{
			if(s.empty()==true)
				return false;
			else if(ismatching(s.top(),st[i])==false)
				return false;
			else
				s.pop();
		}
	}
	return (s.empty()==true);
}
int main(){
	string st="((()))";
	if(isbalancing(st))
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}
