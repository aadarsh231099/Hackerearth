//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/seven-segment-display-nov-easy-e7f87ce0/
#include <bits/stdc++.h>
using namespace std;
#define long long int
int digit(char a)
{   int m;
	if(a=='0' || a=='6' || a=='9')
	m=6;
	if(a=='1')
	m=2;
	if(a=='2' || a=='3' || a=='5')
	m=5;
	if(a=='4')
	m=4;
	if(a=='7')
	m=3;
	if(a=='8')
	m=7;
	return m;
}
void solve(){
	int c=0,d,res;
	string n;
	cin>>n;
	if(n=="0"){
		cout<<"111"<<endl;
		return;
	}
	for (int i=n.length()-1;i>=0;i--){
		c=c+digit(n[i]);
	}
	if(c%2==0)
	{
		for(int j=0;j<(c/2);j++)
		{
			cout<<"1";
		}}
	else if (c%2==1)
	{   cout<<"7";
		for(int k=0;k<(c/2)-1;k++)
		{
			cout<<"1";
		}
	}cout<<endl;
	}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
	cin>>t;
	while(t--)
		solve();
	return 0;}