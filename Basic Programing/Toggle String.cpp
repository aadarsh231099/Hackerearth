//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/modify-the-string/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int i;
	string s,s1;
	cin>>s;
	for(i=0;i<s.length();i++)
	{
		if(isupper(s[i]))
		s[i]=tolower(s[i]);
		else
		s[i]=toupper(s[i]);
	}cout<<s;

}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}