#include<bits/stdc++.h>
using namespace std;
string solve() {
    int n;
    cin >> n;
    if(n % 2 == 0)  return "Mahmoud";
    else            return "Ehab";
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