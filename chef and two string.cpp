



#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
#include<iterator>
#include<iomanip>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
        string s1,s2;
cin>>s1>>s2;
int c=0,f=0,r=0;
for(int i=0;i<s1.length();i++){
    if(s1[i]==s2[i]){
        c++;
        if(s1[i]=='?'){
            f++;
        }
    }
    if(s1[i]=='?'&&s2[i]!='?'||s1[i]!='?'&&s2[i]=='?'){
        r++;
    }
}
int mx=s1.length()-c+f;
int mi=s1.length()-c-r;
cout<<mi<<" "<<mx<<endl;
}
return 0;

}




