//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/palindrome-check-2/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	//another method to reverse string
	/*string s,s1;
	cin>>s;
	s1=s;
	reverse(s1.begin(),s1.end());*/
	string s,s1;
	cin>>s;
	int i;
	for(i=s.length()-1;i>=0;i--)
	{s1=s1+s[i];}
	if(s==s1)
	cout<<"YES";
	else
	cout<<"NO";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}