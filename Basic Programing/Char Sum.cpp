//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/char-sum-2d3a6ab5/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int c=0;
	string s;
	cin>>s;
	for(int i=0;i<s.length();i++)
	{
		int val=(s[i]-'a')+1;
		c=c+val;
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