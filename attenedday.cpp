//identify the max attened days
//intput
// 3
// 3
// 1 2 3 
// 1
// 4
// 8
// 1 2 0 7 2 0 2 2


 #include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n+1];
    a[n]= -1;
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==1)
    continue;

    int mx=-1;
    vector<int>ans;

    for(int i=0;i<n;i++){
      if(a[i]>a[i+1] && a[i]>mx){
          ans.push_back(a[i]);
      }
      mx=max(mx,a[i]);
    }
    for(int i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    cout<<endl;
  }
}