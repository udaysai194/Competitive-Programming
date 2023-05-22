#include<bits/stdc++.h>
using namespace std;
int solve() {
    int count = 0;
    int a,b;
    cin >> a >> b;
    while(a <= b) {
        count++;
        a = 3*a;
        b = 2*b;
    }

    return count;
}
 
int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
 
   int t = 1;
   //cin >> t;
 
   while(t--) {
 
      cout << solve() << endl;
 
   }
 
   return 0;
}