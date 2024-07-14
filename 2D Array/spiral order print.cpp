#include<bits/stdc++.h>
using namespace std;
int main (){
   int n,m;
   cin >>n>>m;
   int a[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)
    cin>>a[i][j];
   }

   //spiral order print 
   int rowst=0,rowend=n-1,colst=0,colend=m-1;
   while(rowst<=rowend && colst<=colend){

    for(int i=colst;i<=colend;i++)
    cout<<a[rowst][i]<<" ";
    ++rowst;
    for(int i=rowst;i<=rowend;i++)
    cout<<a[i][colend]<<" ";
    --colend;
     if(rowst<=rowend){
    for(int i=colend;i>=colst;i--)
    cout<<a[rowend][i]<<" ";
    --rowend;
     }
     if(colst<=colend){
    for(int i=rowend;i>=rowst;i--)
    cout<<a[i][colst]<<" ";
    ++colst;
   }
   }
}
