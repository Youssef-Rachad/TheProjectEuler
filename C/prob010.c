#include <stdio.h>
int isPrime(unsigned long long n){
    if(n%2==0 || n==1) return 0;
    for(unsigned long long i = 3; i*i <= n; i+=2) if(n%i==0) return 0;
}
unsigned long long int solve(){
    unsigned long long int ans = 17;
    for(int i = 11; i<2000000; i+=2){
        if(isPrime(i)) ans+=i;
    }
    return ans;
}
int main(int argc, char *argv[]) {
    printf("%llu\n", solve());// 142913828922
    return 0;
}


