#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// the smallest product of two 3 digit numbers is 10 000
// the biggest is 998 001 (999*999)
int reverseNumber(int n){
    int remainder = 0,reversed = 0;
    while (n) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return reversed;
}
/*
   char* palindrome5(){
   char beg[5] = "10";
   char mid[1] = "0";
   char end[2] = "01";
   strcat(beg,mid);
   strcat(beg,end);
//int result = atoi(res);
//return result;
return beg;
}
*/
int solve(int arg){
    return 0;
}
int main(int argc, char *argv[]) {
    //printf(" %d\n", solve(0));
    char toa[3] = "de";
    char reg[10] = "abc";
    strcat(reg, toa);
    printf("%s\n", reg);
    printf("%d\n", reverseNumber(60));
    return 0;
}


