//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/bricks-game-5140869d/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,i,s=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		s=s+i;
		if(s>=n)
		{
		    cout<<"Patlu";
		    break;
		}
		s=s+(2*i);
		if(s>=n)
		{
			cout<<"Motu";
			break;
		}
}}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}