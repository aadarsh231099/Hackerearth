//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/arithmetic-progression-1-81131fa7/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long int a,b,c,res;
     cin>>a>>b>>c;
	 res=(abs((b-a)-(c-b))+1)/2;
     cout<<res<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}