#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    for (int i=1; i*i<=n;i++){
        if(n%1==0){
            cou<<i<<"\n"<<n/i;
        }
    }
    return 0;
}

