//largest word in the sentence 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  cin.ignore();
  char a[n+1];
  cin.getline(a,n);
  cin.ignore();
  int mx=0,i=0,l=0;
  int st=0,mxst=0;
  while(1){
    if(a[i]==' ' || a[i]=='\0')
    {
      if(l>mx){
        mx=l;
        mxst=st;
      }
      l=0;
      st=i+1;
    }
    else
    l++;
    if(a[i]=='\0')
    break;
    i++;
  } 
  cout<<mx<<endl;
  for(int i=0;i<mx;i++){
    cout<<a[i+mxst];
  }
}
