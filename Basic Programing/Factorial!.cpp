//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,i,fact=1;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}cout<<fact;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}