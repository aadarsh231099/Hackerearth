//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/vc-pairs/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,i,c=0;
	cin>>n;
	string s;
	cin>>s;
	for(i=0;i<n;i++){
		if((s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u') && (s[i+1]=='a'||s[i+1]=='e'||s[i+1]=='i'||s[i+1]=='o'||s[i+1]=='u'))
		{
		c=c+1;
	}
	}
	cout<<c<<endl;	
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}