#include <stdio.h>
#include <math.h>

int isPrime(unsigned long long int n){
    if(n!=2 && n%2==0 || n==1) return 0;
    for(unsigned long long int i = 3; i*i <= n; i+=2) if(n%i==0) return 0;
    return 1;
}
long long int solve(int k){
    int n = 1;
    long long int p = 2;
    while(n!=k){
        p++;
        if(isPrime(p)) n++;
    }
    return p;
}
int main(int argc, char *argv[]) {
    //printf("%lld", solve(6)); // returns 13
    printf("%lld", solve(10001)); // returns 104743
    for(int i = 0; i<100; i++) printf("%d is prime? (1-->yes) %d\n", i, isPrime(i));
    return 0;
}


