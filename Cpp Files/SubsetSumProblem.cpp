#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int i,j,n,*a,sum = 0;
        cin>>n;
        a = new long int[n+1];

        for(i=0;i<n;i++){
            cin>>a[i];
            sum += a[i];
        }
        
        if(sum%2!=0){
            cout<<"NO\n";
            continue;
        }else{
            sum = sum / 2;
            bool **dp = new bool*[n+1];
            for(i=0;i<=n;i++){
                dp[i] = new bool[sum+1]{0};
            } 
            for(i=0;i<n;i++){
                for(j=1;j<=sum;j++){
                    if(i>0 && dp[i-1][j]==1){
                        dp[i][j] = 1;
                    }else if(a[i]==j){
                        dp[i][j] = 1;
                    }else if(j-a[i]>0 && i>0 && dp[i-1][j-a[i]]==1){
                        dp[i][j] = 1;
                    }
                }
            }

            if(dp[n-1][sum]==1){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }

    }
}