#include <bits/stdc++.h>
using namespace std;

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
        long int n,i,j,*a,*d,p=0,max_p=0;
        cin>>n;
        a = new long int[n+1];
        d = new long int[n+1];

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=0;i<n;i++){
            cin>>d[i];
        }

        sort(a,a+n);
        sort(d,d+n);

        i=0;
        j=0;
        while(i<n && j<n){
            if(a[i]==d[j]){
                p++;
                i++;
                max_p = max(p,max_p);
                p--;
                j++;
            }
            else if(a[i]<d[j]){
                p++;
                i++;
                max_p = max(p,max_p);
            }else{
                p--;
                j++;
            }
        }

        cout<<max_p<<endl;
    }
}