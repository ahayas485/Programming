#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,i,j;
        cin>>n;
        long int a[n],lis[n];

        for(i=0;i<n;i++){
            cin>>a[i];
            lis[i] = 1;
        }

        for(i=1;i<n;i++){
            for(j=0;j<i;j++){
                if(a[i]>a[j] && lis[i]<lis[j]+1){
                    lis[i] = lis[j] + 1;
                }
            }
        }

        cout<<*max_element(lis,lis+n)<<endl;
    }
}