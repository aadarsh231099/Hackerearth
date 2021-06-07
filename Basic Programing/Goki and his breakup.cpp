//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/tds-and-his-breakup/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	int x,y;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		 cin>>y;
		 if(y>=x)
		 cout<<"YES"<<endl;
		 else
		 cout<<"NO"<<endl;
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