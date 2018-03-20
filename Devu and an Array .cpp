
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
#include<iomanip>
using namespace std;
int main(){

int n,q;
cin>>n>>q;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
sort(a,a+n);
int b[100001],k=0;
while(q--){
    int t;
    cin>>t;
if(t>=a[0]&&t<=a[n-1]){
    cout<<"Yes"<<endl;
}
else{
    cout<<"No"<<endl;
}

}
return 0;

}

