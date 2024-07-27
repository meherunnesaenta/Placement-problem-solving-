#include<bits/stdc++.h>
using namespace std;
int firstIndexSearch(int a[],int n,int i,int key){
    if(i==n)
    return -1;
  if(a[i]==key)
  return i;
  return firstIndexSearch(a,n,i+1,key);

}
int lastIndexSearch(int a[],int n,int i,int key){
    if(n==i)
    return -1;
    if(a[n-1]==key)
    return n-1;
    return lastIndexSearch(a,n-1,i,key);
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int key,i;
    cout<<"From where Search will be start : ";
    cin>>i;
    cout<<"Which key want to Find : ";
    cin>>key;
    
    cout<<"First finding key index: " <<firstIndexSearch(a,n,i,key)<<endl;;
    cout<<"Last finding key index: :" <<lastIndexSearch(a,n,i,key);
}