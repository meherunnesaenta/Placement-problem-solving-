#include<bits/stdc++.h>
using namespace std;
void revString(string s){
    if(s.length()==0)
    return ;
    string rev=s.substr(1);

    revString(rev);
    cout<<s[0];
}
int main(){
    string s;
    cin>>s;
    revString(s);
}