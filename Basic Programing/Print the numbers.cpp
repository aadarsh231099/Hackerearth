//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/print-the-numbers/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,i;
	cin>>n;
	int a[n];
	for (i=0;i<n;i++){
		cin>>a[i];
	}
	for (i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}