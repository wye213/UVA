#include <stdio.h>

int main(){
    long long m,n;
    while(scanf("%lld %lld", &m, &n) != EOF){
        printf("%lld\n", ((m-n) > 0)?m-n:n-m);
    }
    return 0;
}
