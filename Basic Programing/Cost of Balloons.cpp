//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int cg,cp;
  cin>>cg>>cp;
  int n;
  cin>>n;
  int a[n],b[n],s1=0,s2=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i]>>b[i];
    s1+=a[i];
    s2+=b[i];
  }
  int mn=min(s1,s2);
  int mx=max(s1,s2);
  int mxcost=max(cg,cp);
  int mncost=min(cg,cp);
  cout<<(mn*mxcost)+(mx*mncost)<<endl;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
        int t;
  cin>>t;
  while(t--)
    solve();
  return 0;}