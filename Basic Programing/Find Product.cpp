//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-product/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,i;
	cin>>n;
	int a[n];
	long p=1;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		p=(p*a[i])%(1000000007); //10^9+7=1000000007
	}
	cout<<p;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}