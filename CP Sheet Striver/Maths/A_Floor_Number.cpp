#include<bits/stdc++.h>
using namespace std;
int solve() {
    int n, x;
    cin >> n >> x;
    if(n <= 2)  return 1;
    return ceil((n-2)/(x*1.0) + 1);
}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);
 
   int t;
   cin >> t;
 
   while(t--) {
 
      cout << solve() << endl;
 
   }
 
   return 0;
}