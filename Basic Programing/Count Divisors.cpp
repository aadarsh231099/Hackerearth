//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int l,r,k,i,c=0;
	cin>>l>>r>>k;
	for(i=l;i<=r;i++)
	{
		if(i%k==0)
		c=c+1;
	}
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