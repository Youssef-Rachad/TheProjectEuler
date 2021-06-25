#include <stdio.h>
#include <math.h>

long long int sumOfSquares(int n){
    if (n==1) return 1;
    return n*n+sumOfSquares(n-1);
}
long long int squareOfSum(int n){
    return pow(0.5*n*(n+1),2);
}
long long int solve(int n){return squareOfSum(n) - sumOfSquares(n);}
int main(int argc, char *argv[]) {
    //printf("%lld", solve(10)); // returns 2640 (correct)
    printf("%lld", solve(100)); // returns 25164150
    return 0;
}


