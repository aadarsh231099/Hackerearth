//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/teddy-and-tweety/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	if((n%3)==0)
	cout<<"YES";
	else
	cout<<"NO";
	}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}