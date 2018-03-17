#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int a[n],b[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
}
sort(a,a+n);
int c=0;
for(int i=1;i<=a[n-1];i++){
    if(a[i-1]==i){
        c++;
    }
}
int flag=0;
for(int i=0;i<n;i++){
    if(a[i]!=b[i]){
        flag=1;
        break;
    }
}
if(c==n&&flag==1){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}
}

return 0;
}

