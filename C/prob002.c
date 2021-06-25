#include <stdio.h>
int solve(int prev,int cur, int total){
    if(!(cur<4e6)) return total;
    return solve(cur, cur+prev, total + cur * (1-cur%2));
}
int main(int argc, char *argv[]) {
    printf("%d", solve(1,1,0));
    return 0;
}


