//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/back-to-school-1/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,c;
	cin>>a>>b>>c;
	if(a>b && a>c)
	cout<<a;
	else if(b>c && b>a)
	cout<<b;
	else
	cout<<c;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}