//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/ladderophilia/
#include <bits/stdc++.h>
using namespace std;
void solve(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{cout<<"*   *"<<endl;
	 cout<<"*   *"<<endl;
     if(i!=n)
     {
    cout<<"*****"<<endl;
    }
} cout<<"*   *"<<endl;
  cout<<"*   *"<<endl;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int t=1;
	//cin>>t;
	while(t--)
		solve();
	return 0;}