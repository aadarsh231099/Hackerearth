//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/e-maze-in-1aa4e2ac/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int x=0,y=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='L')
		x=x-1;
		if(s[i]=='R')
		x=x+1;
		if(s[i]=='U')
		y=y+1;
		if(s[i]=='D')
		y=y-1;
	}cout<<x<<" "<<y;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}