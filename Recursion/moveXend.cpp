#include<bits/stdc++.h>
using namespace std;
string moveXtillend(string s){
    if(s.length()==0)
    return "";
    char ch=s[0];
    string ans=moveXtillend(s.substr(1));
    if(ch=='x')
    return ans+ch;
    return ch+ans;
}
int main(){
    string s;
    cin>>s;
    cout<<moveXtillend(s);
}