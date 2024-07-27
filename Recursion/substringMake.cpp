 #include<bits/stdc++.h>
 using namespace std;
 void subseq(string s,string ans){
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }
    char ch=s[0];
    string r=s.substr(1);
    subseq(r,ans);
    subseq(r,ans+ch);
 }
 int main(){
    string s;
    cin>>s;
    subseq(s,"");
 }