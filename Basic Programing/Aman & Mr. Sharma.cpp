//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/aman-mrsharma/
#include <bits/stdc++.h>
using namespace std;
int solve(){
	int d,r,x,c=0;
	cin>>d;
	for(int i=0;i<d;i++)
	{
		cin>>r>>x;
		if(double(2*(22/7.0)*r)<=double(100*x))
		c=c+1;
	}
	cout<<c;

}
int main()
    {
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
	solve();
	return 0;
	}