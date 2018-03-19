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
int a,b;
cin>>a>>b;

 if(a%2==0&&b%2==0){
if(a+2==b||b+2==a){
    cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;
}
else if(a%2==1&&b%2==1){

    if(a+2==b||b+2==a){
        cout<<"YES"<<endl;
    }
else{
    cout<<"NO"<<endl;
}
}

else if(a%2==1&&b%2==0){
if(a+1==b)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
else if(a%2==0&&b%2==1){
if(b+1==a){
cout<<"YES"<<endl;}
else
cout<<"NO"<<endl;
}
else{
    cout<<"NO"<<endl;
}}
return 0;
}
