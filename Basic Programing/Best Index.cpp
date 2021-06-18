https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/best-index-1-45a2f8ff/
#include <bits/stdc++.h>
using namespace std;
void solve(){
  int n;
    cin>>n;
    int r=(-1+sqrt(1+8*n))/2;
    int k=(r*(r+1))/2;
    long long int arr[n],arr1[n];
    cin>>arr[0];
    arr1[0]=arr[0];
    for(int i=1;i<n;i++)
    {
       cin>>arr[i];
     arr1[i]=arr[i]+arr1[i-1];
    }
    long long int max_sum=arr1[k-1];
    for(int i=1;i<n;i++)
    {
         if(i+k<=n)
       {
           max_sum=max(max_sum,arr1[i+k-1]-arr1[i-1]);
       }
       else
       {
           k-=r;
           r--;
           max_sum=max(max_sum,arr1[i+k-1]-arr1[i-1]);
       }
    }
    cout<<max_sum<<endl;
}
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
    int t=1;
  //cin>>t;
  while(t--)
    solve();
  return 0;}