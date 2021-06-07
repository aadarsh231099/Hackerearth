//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/divisible-or-not-81b86ad7/
#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n,i,r,num=0,temp;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
        temp=a[i];
    }for(i=0;i<n;i++){
        
        r=temp%10;
        num=num*10+r;
    }
    if(num%10==0)
    cout<<"Yes";
    else
    cout<<"No";

}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}