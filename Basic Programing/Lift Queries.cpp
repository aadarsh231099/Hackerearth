//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/lift-queries/
#include <bits/stdc++.h>
using namespace std;
#define long long int
int a=0,b=7;
void solve(){
	int n;
	cin>>n;
	if(abs(n-a)>abs(n-b))
	{cout<<"B"<<endl;
	b=n;}
	else{
	cout<<"A"<<endl;
	a=n;}

}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}