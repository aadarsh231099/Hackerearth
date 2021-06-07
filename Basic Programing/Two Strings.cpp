//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/two-strings-4/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int c=0,flag=0;
	string s1,s2;
	cin>>s1>>s2;
	sort(s1.begin(),s1.end());
	sort(s2.begin(),s2.end());
	if(s1==s2)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}