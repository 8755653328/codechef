
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
#include<iomanip>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
string s;
cin>>s;
int f=0,c=0;
for(int i=0;i<s.length();i++){
    if(s[i]=='1')
        c++;
    if(s[i]=='0')
        f++;
}
if(c+1==f||f+1==c||c==f){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}

return 0;
}
