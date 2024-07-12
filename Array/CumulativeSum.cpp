#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int mx= INT_MIN;
    
    int cur[n+1];
    cur[0]=0;
   for(int i=1;i<=n;i++){
    cur[i]=cur[i-1]+a[i-1];
   }
   for(int i=1;i<=n;i++){
    int sum=0;
    for(int j=0;j<i;j++){
       sum =cur[i]-cur[j];
       mx=max(sum,mx);
    }
   }
   cout<<mx;
   return 0;
}
