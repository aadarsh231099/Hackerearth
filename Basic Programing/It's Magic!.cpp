//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/its-magic/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	long long int n,s=0,pos=0;
    cin>>n;
    long long int a[n],min=1000000001;
    for(long long int i=0;i<n;i++)
    {
        cin>>a[i];
        s=s+a[i];
    }
	  for(long long int i=0;i<n;i++)
    {
        if((s-a[i])%7==0)
        {
            if(a[i]<min)
            {
            min=a[i];
            pos=i;
            }
        }
    }
    if(pos==0)
	cout<<"-1";
	else
	cout<<pos;
}int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}