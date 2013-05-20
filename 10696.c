#include <stdio.h>

long f91(long n){
    long t;
    if(n >= 101)t = n-10;
    if(n <= 100)t = f91(f91(n+11));
    return t;
}

int main(){
    long n;
    while(scanf("%ld", &n)&& n){
        printf("f91(%ld) = %ld\n",n,f91(n));
    }
    return 0;
}
