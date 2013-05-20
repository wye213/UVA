#include <stdio.h>
long f(long n){
    if (n==1)return 1;
    return f(n/2)+1;
}
int main(){
    long n;
    while(scanf("%ld", &n) != EOF)printf("%ld\n", f(n));
    return 0;
}
