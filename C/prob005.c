// Problem 5
//2520 is the smallest number that can be divided by
//each of the numbers from 1 to 10 without any remainder.
//
//What is the smallest positive number that is evenly
//divisible by all of the numbers from 1 to 20?

// take the highest power of each prime number from 1 to 20
// ->in this case 16, 9, 5, 7, 11, 13, 17, 19
// and multiply them

#include <stdio.h>
#include <math.h>

int isPrime(unsigned int n){
    if(n==2) return 1;
    if(n%2==0 || n==1) return 0;
    for(unsigned int i = 3; i*i <= n; i+=2) if(n%i==0) return 0;
}
int solve(int a, int b){
    int ans = 1;
    for(int i = b; i>=a; i--){
        if(isPrime(i)){
            int k = 1;
            while(pow(i, k)<=b){
                ans *= i;
                k++;
            }
        }
    }
    return ans;
}

int main(int argc, char *argv[]) {

    //double pi = 3.14159;
    //double radius = 5.0;
    //double area = pi * pow(radius, 2.0);
    //printf("The area of the circle is : %f cm^2!\n", area);
    printf("%d\n",solve(1, 10));
    printf("%d\n",solve(1, 20));
    return 0;
}


