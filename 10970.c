#include <stdio.h>

int main(){
    long m, n;
    while(scanf("%ld %ld", &m, &n) != EOF){
        printf("%ld\n", m-1+(n-1)*m);
    }
    return 0;
}

