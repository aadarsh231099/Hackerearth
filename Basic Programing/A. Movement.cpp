//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/a-movement-1/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,c;
	cin>>n;
    c=n/5;
	if(n%5!=0){
	c=c+1;
	}cout<<c; 
	
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}