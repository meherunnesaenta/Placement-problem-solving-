//largest word in the sentence 
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  cin.ignore();
  char a[n+1];
  cin.getline(a,n+1);
  cin.ignore();
  int mx=0,i=0,l=0;
  while(1){
    if(a[i]==' ' || a[i]=='\0')
    {
      mx=max(mx,l);
      l=0;
    }
    else
    l++;
    if(a[i]=='\0')
    break;
    i++;
  } 
  cout<<mx;
}
