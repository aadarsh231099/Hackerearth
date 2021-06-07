//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seating-arrangement-1/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,num,s;
	cin>>n;
	if(n<=12)
	num=13-n;
	else{
		if(n%12!=0)
		s=12*(n/12);
		else
		s=12*((n/12)-1);
		num=2*s+13-n;
	}
    if(n%6==0||n%6==1)
	cout<<num<<" "<<"WS"<<endl;
    else if(n%6==2||n%6==5)
	cout<<num<<" "<<"MS"<<endl;
    else
	cout<<num<<" "<<"AS"<<endl;		
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}