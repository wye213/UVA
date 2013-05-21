#include <stdio.h>

int main(){
    long m,n,x,y,z,sum=0;
    scanf("%ld", &m);
    while(m--){
        scanf("%ld", &n);
        while(n--){
            scanf("%ld%ld%ld", &x,&y,&z);
            sum += x*z;
        }
        printf("%ld\n", sum);
        sum=0;
    }
    return 0;
}
