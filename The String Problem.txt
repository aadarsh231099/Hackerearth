//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/vowels-love/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	string s;
	int i,ca=0,ce=0,ci=0,co=0,cu=0;
	cin>>s;
		for(i=0;i<s.length();i++){
		if(s[i]=='a'||s[i]=='A')
			ca=1;
		if(s[i]=='e'||s[i]=='E')
			ce=1;
		if(s[i]=='i'||s[i]=='I')
			ci=1;
		if(s[i]=='o'||s[i]=='O')
			co=1;
		if(s[i]=='u'||s[i]=='U')
			cu=1;}
		if((ca && ce && ci && co && cu)==1)
			cout<<"lovely string"<<endl;
		else
			cout<<"ugly string"<<endl;
	}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}