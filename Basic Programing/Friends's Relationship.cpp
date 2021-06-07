//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/friends-relationship-1/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
    cin>>n;
    int c=n*2-1;
    for(int i=0;i<n;i++)
	{
    for(int j=0;j<n*2;j++)
	{
    if(j>i && j<c)
	{
    cout<<"#";
	}
    else
	{
	cout<<"*";
	}
	}
    c--;
    cout<<"\n";
	}
	}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}