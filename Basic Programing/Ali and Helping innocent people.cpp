//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/cartag-948c2b02/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	cin>>s;
	if(((s[0]+s[1])%2==0)&&(((s[3]+s[4])%2==0)&&((s[4]+s[5])%2==0)&&((s[7]+s[8])%2==0))&&(s[2]!='A')&&(s[2]!='E')&&(s[2]!='I')&&(s[2]!='O')&&(s[2]!='U')&&(s[2]!='Y'))
	cout<<"valid";
	else
	cout<<"invalid";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}