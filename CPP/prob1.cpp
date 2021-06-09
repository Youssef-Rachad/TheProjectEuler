#include<bits/stdc++.h>
using namespace std;

int summer(int n, int p){
    return (n*(p/n)*(p/n+1)/2);
}
int main(){
    int sum = summer(3,999) + summer(5,999) - summer(15,999);
    cout<<sum<<endl;
    return 0;
}
