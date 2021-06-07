//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/make-all-equal-90a21ab2/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n,c=0,flag=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];}
	for(int i=0;i<n;i++)
	{
		cin>>b[i];
	}
	int min=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<min)
		min=a[i];
	}
	for(int i=0;i<n;i++)
	{   while(a[i]>min && b[i]!=0){
			a[i]=a[i]-b[i];
			c=c+1;
		}
		if(a[i]<0){
			flag=1;break;
		}
		if(a[i]<min){
			min=a[i];
			i=-1;
		}
	}
if(flag!=1)
cout<<c;
else
cout<<"-1";
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}