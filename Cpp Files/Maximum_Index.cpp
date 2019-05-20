#include<bits/stdc++.h>
using namespace std;

long int min(long int a, long int b){
    if(a<b){
        return a;
    }
    return b;
} 

long int max(long int a, long int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long int i,j,n,diff=-1;
        cin>>n;
        long int *a,*l,*r;
        a = new long int[n+1];
        l = new long int[n+1];
        r = new long int[n+1];
        for(i=0;i<n;i++){
            cin>>a[i];
            if(i==0){
                l[i] = a[i];
            }else{
                l[i] = min(a[i],l[i-1]);
            }
        }

        for(i=n-1;i>=0;i--){
            if(i==n-1){
                r[i] = a[i];
            }else{
                r[i] = max(a[i],r[i+1]);
            }
        }

        j=0;
        for(i=0;i<n && j<n;){
            if(l[i]<=r[j]){
                diff = max(diff,j-i);
                j += 1;
            }else{
                i += 1;
            }
        }

        cout<<diff<<endl;
    }
}