#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<set>
using namespace std;
int main(){

int t;
cin>>t;
while(t--){
long long int n;
cin>>n;
long long unsigned int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
long long int mi=a[0];
for(int i=1;i<n;i++){
    if(mi<a[i]){
        mi=a[i];
    }
}
long long unsigned sum=mi*n-1;
cout<<sum<<endl;
}

return 0;
}

