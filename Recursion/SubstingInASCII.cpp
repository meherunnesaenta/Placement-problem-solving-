#include<bits/stdc++.h>
using namespace std;
void subseqascci(string s,string ans){
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string r=s.substr(1);
    subseqascci(r,ans);
    subseqascci(r,ans+ch);
    subseqascci(r,ans+to_string(ch));
}
int main(){
    string s;
    cin>>s;
    subseqascci(s,"");
}