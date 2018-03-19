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
int q,p;
cin>>q>>p;
if(q>1000){
    int temp=q/10;
    q=q-temp;
}
cout<<fixed<<setprecision(6)<<double(p*q)<<endl;
}

return 0;
}

