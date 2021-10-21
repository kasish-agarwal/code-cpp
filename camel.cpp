#include <bits/stdc++.h>
using namespace std;

#define endl "\n";
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef pair<int,int> ii;
void solve(){
  string a;
  cin>>a;
  int s=a.size();
  for (int i = 0; i<s; i++) {
   cin>>a[i];
      if(i==0) {
         a[i]>90?cout<<(char)(a[i]-32):cout<<a[i];
      } else {cout<<a[i];}
   }

}

int main() {   
   int t=1;
   // cin>>t;
   while(t--){
      solve();
   }
   return 0;  
}   
