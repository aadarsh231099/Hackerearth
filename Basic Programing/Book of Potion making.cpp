//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/sum-it-if-you-can-4867f851/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,i=10,s=0,d;
	cin>>n;
	while(n){
		d=n%10;
		s=s+(i*d);
		i=i-1;
		n=n/10;
	}
	if(s%11==0)
	cout<<"Legal ISBN";
	else
	cout<<"Illegal ISBN";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}