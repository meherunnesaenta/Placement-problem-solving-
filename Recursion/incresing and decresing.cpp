#include<bits/stdc++.h>
using namespace std;
void inc(int n){
    if(n==0)
    return ;
    inc(n-1);
    cout<<n<<" ";
}
void decre(int n){
    if(n==0)
    return ;
    cout<<n<<" ";
    decre(n-1);
}
int main(){
    int n;
    cin>>n;
    inc(n);
    cout<<endl;
    decre(n);
}