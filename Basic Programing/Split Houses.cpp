//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/split-house-547be0e9/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,i;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='H' && s[i+1]=='H')
		{
			cout<<"NO"<<endl;
			exit (0);
		}
		if(s[i]=='.')
		s[i]='B';
	}
	cout<<"YES"<<endl;
    cout<<s;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();	
	return 0;}