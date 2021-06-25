#include <stdio.h>
// Logic:
// determine if the input is even or odd to adjust the first factor checked
// (check only odd factors)
// determine if a factor is prime by dividing it by 2 and odd numbers
// return the first result
// ----
// the top down approach is very computation intensive
// Logic 2:
// factor out all of the primes in the input
// the last number will be the largest prime
int isPrime(unsigned long long n){
    if(n%2==0 || n==1) return 0;
    for(unsigned long long i = 3; i*i <= n; i+=2) if(n%i==0) return 0;
}
unsigned long long solve(unsigned long long n){
    // is the number already a prime (therefore the biggest)
    if(isPrime(n) || n==2) return n;
    // catch power of 2 case
    while(n%2==0) return solve(n/2);
    // grab smallest prime factor
    for(int i = 2; i*i<=n; i++){
        if(n%i==0) return solve(n/i);
    }
}
int main(int argc, char *argv[]) {
    // try: square, power of 2, prime, composite
    // (for testing)
    printf("greatest factor of %lu is %lu\n", 25, solve(25));
    printf("greatest factor of %lu is %llu\n", 32, solve(32));
    printf("greatest factor of %lu is %llu\n", 23, solve(23));
    printf("greatest factor of %lu is %llu\n", 20, solve(20));

    // answer the question
    printf("greatest factor of %llu is %llu\n", 600851475143, solve(600851475143));
    return 0;
}


