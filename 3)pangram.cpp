//pangram checking
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    vector<bool>mark(26,false); 
    int flag=1;
    int index;
    for(int i=0;i<s.size();i++){
        if(s[i]>='A'&&s[i]<='Z') {
            index=s[i]-'A';
        }
        else if(s[i]>='a'&&s[i]<='z'){
            index=s[i]-'a';
        }
        else continue;
        mark[index]=true;
    }
    for(int i=0;i<=25;i++){
        if(mark[i]==false) {
            flag=0;
        }
    }
    if(flag==0){
        cout<<"false";
    }
    else if(flag==1){
        cout<<"true";
    }
}
