//Find sum From array 

 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n,s;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cin>>s;

    int j=0,i=0,sum=0,st=-1,en=-1;
    while(j<n && sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j;
        return 0;
    }
    while(j<n){
        sum+=a[j];
        if(sum>s){
            sum-=a[i];
            i++;
        }
        if(sum==s)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout<<st<<" "<<en;
 }