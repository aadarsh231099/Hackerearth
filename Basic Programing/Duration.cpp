//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/duration/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int sh,sm,eh,em,hh,mm;
	cin>>sh>>sm>>eh>>em;
	if(sm>em)
	{
        mm=(60-sm+em);
	    hh=eh-sh-1;
	}
	else if(em>sm)
	{
		mm=em-sm;
		hh=eh-sh;
	}
	else if(em==sm)
	{
		mm=0;
		hh=eh-sh;
	}cout<<hh<<" "<<mm<<endl;
	}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}