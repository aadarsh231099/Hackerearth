//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/roy-and-profile-picture/
#include <bits/stdc++.h>
using namespace std;
void solve(int l){
	int w,h;
	cin>>w>>h;
	if(w<l || h<l)
	cout<<"UPLOAD ANOTHER"<<endl;
	else if(w>=l && h>=l)
	{
	    if(w==h)
	    cout<<"ACCEPTED"<<endl;
	    else
	    cout<<"CROP IT"<<endl;
	}
        else
	cout<<"CROP IT"<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int l;
	cin>>l;
    int t;
	cin>>t;
	while(t--)
		solve(l);
	return 0;}