#include <iostream>
using namespace std;

long int max(long int a,long int b){
    if(a>b){
        return a;
    }
    return b;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        long int n,i,curr_max,max_so_far;
        cin>>n;
        long int a[n];
        cin>>a[0];
        curr_max = max_so_far = a[0];
        for(i=1;i<n;i++){
            cin>>a[i];
            curr_max = max(a[i],curr_max+a[i]);
            max_so_far = max(max_so_far,curr_max);
        }
        cout<<max_so_far<<endl;
    }
}