#include <stdio.h>
//cheeky implementation of consecutive sum formula
//seperating the sums into a formula will give cleaner code
int solve(){
    int sum3 = ((int) 999/3) * ((int) 999/3 + 1) * 1.5;
    int sum5 = ((int) 999/5) * ((int) 999/5 + 1) * 2.5;
    int sum15 = ((int) 999/15) * ((int) 999/15 + 1) * 7.5;
    return sum3 + sum5 - sum15;
}
int main(int argc, char *argv[]) {
    printf("%d", solve());
    return 0;
}


