#include <stdio.h>
#include <math.h>

// Generating pythagorean triples:
// let m,n int (m > n)
// a = 2mn
// b = m^2-n^2
// c = m^2+n^2

// keep getting "shell returned -1073741571"
// maybe a recursion limit error?
// notice m=7 & n=1 yields a+b+c>100
// attempt #2: notice m=16 & n=1 yields a+b+c>500
// attempt #3: notice m=19 & n=1 yields a+b+c>750
// attempt #4: notice m=22 & n=1 yields a+b+c>750
/* Recursion not working ... yet
   int solve(int m, int n){
   int a = 2*m*n, b=m*m-n*n, c=m*m+n*n;
   if(a+b+c == 1000){
   return a*b*c;
   }else{
   if(n = m){
   return solve(m+1, 1);
   }else{
   return solve(m, n+1);
   }
   }
   }
   */
int trianglePerimeter(int a, int b, int c){return a+b+c;}
int solve(){
    for(int a = 1; a<=1000;a++){
        for(int b = a+1; b<=1000;b++){
            int c = 1000 - a - b;
            if(pow(a,2)+pow(b,2) == pow(c,2)) return a*b*c;

        }
    }
}
// 31875000
int main(int argc, char *argv[]) {
    //int m, n;
    //m = 3;
    //n = 2;
    //printf("%d, %d, %d", 2*m*n, m*m-n*n, m*m+n*n);
    printf("%lld", solve());
    return 0;
}


