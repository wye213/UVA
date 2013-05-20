#include <stdio.h>
int main(){
    int n,a,b,j=0;
    scanf("%d", &n);
    while(n--){
        scanf("%d %d", &a, &b);
        if(a%2 == 0)a=a+1;
        a = (a-1)>>1;
        if(b%2 == 0)b=b-1;
        b = (b+1)>>1;
        printf("Case %d: %d\n", ++j, b*b -a*a);
    }
    return 0;
}
