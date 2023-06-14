#include<bits/stdc++.h>
using namespace std;
void solve() {
    int l, r;
    cin >> l >> r;
    if(r%2 == 0 && r/2 >= l)    cout << r/2 << " " << r;
    else if((r-1)/2 >= l)       cout << (r-1)/2 << " " << r-1;
    else                        cout << -1 << " " << -1;
}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int t;
   cin >> t;
 
   while(t--) {
 
      solve();
      cout << endl;
 
   }
 
   return 0;
}