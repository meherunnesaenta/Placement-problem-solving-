#include<bits/stdc++.h>
using namespace std;
void TowerofHanoi(int n,char src,char helper,char dest){
    if(n==0)
    return ;
    TowerofHanoi(n-1,src,dest,helper);
    cout<<"Move from : "<<src<<" to "<<dest<<endl;
    TowerofHanoi(n-1,helper,src,dest);
}
int main(){
    TowerofHanoi(3,'A','B','C');
}