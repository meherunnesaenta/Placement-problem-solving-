//summation of maximum subarrays
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
cin>>a[i];
        
        int mx=INT_MIN;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<=n-1;j++){
                sum=sum+a[j];
               mx=max(mx,sum);
            }
             
            
        }
       cout<<mx<<" ";
}
