//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/magical-word/
#include <bits/stdc++.h>
using namespace std;
int p(int n){
	if(n<=1)
	return 0;
	for(int i=2;i<n;i++)
	{if(n%i==0)
	return 0;}
	return 1;
}
char solve(int num,int c){
	if(p(num))
	{
	return num;
	}
	else
	{
		c++;
		if(p(num-c) && (num-c)>64){
		return(num-c);}
	    else if(p(num+c) && (num+c)<123){
		return(num+c);}
	    else
	{
		solve(num,c);
	}

}}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t,num,l,c;
	cin>>t;
	string s;
	while(t--){
		cin>>l;
		cin>>s;
		for(int j=0;j<l;j++) {
            num = s[j];
            if(num < 65)
			num = 65;
			cout<<solve(num,0);
        }
        cout<<"\n";    }
	return 0;}