//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/maximum-border-9767e14c/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int maxn = 1e3 + 14;
char c[maxn][maxn];
void solve(){
int n, m;
 cin >> n >> m;
 for(int i = 1; i <= n; i++)
  cin >> (c[i] + 1);
 int ans = 0;
 for(int i = 1; i <= n; i++)
  for(int j = 1, ptr = 1; j <= m; j = ptr)
   if(c[i][j] != '#' || c[i - 1][j] == '#')
    ptr++;
   else{
    while(c[i][ptr] == '#' && c[i - 1][ptr] != '#')
     ptr++;
    ans = max(ans, ptr - j);
   }
 for(int i = 1; i <= n; i++)
  for(int j = 1, ptr = 1; j <= m; j = ptr)
   if(c[i][j] != '#' || c[i + 1][ptr] == '#')
    ptr++;
   else{
    while(c[i][ptr] == '#' && c[i + 1][ptr] != '#')
     ptr++;
    ans = max(ans, ptr - j);
   }
 for(int i = 1; i <= m; i++)
  for(int j = 1, ptr = 1; j <= n; j = ptr)
   if(c[j][i] != '#' || c[j][i - 1] == '#')
    ptr++;
   else{
    while(c[ptr][i] == '#' && c[ptr][i - 1] != '#')
     ptr++;
    ans = max(ans, ptr - j);
   }
 for(int i = 1; i <= m; i++)
  for(int j = 1, ptr = 1; j <= n; j = ptr)
   if(c[j][i] != '#' || c[j][i + 1] == '#')
    ptr++;
   else{
    while(c[ptr][i] == '#' && c[ptr][i + 1] != '#')
     ptr++;
    ans = max(ans, ptr - j);
   }
 cout << ans << '\n';

}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
      	int t;
	cin>>t;
	while(t--)
		solve();
	return 0;
}