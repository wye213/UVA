#include <stdio.h>
int main(){
    long m,n,coun=1,ans=0,a;
    while(scanf("%lld %lld", &m, &n) != EOF){
        if(m < 0 && n < 0) break;
        a = m;
        while(a > 1){
            if(a % 2 == 0)a = a / 2;
            else a = 3 * a + 1;
            if(a > n)break;
            coun++;
        }
        printf( "Case %lld: A = %ld, limit = %lld, number of terms = %lld\n", ++ans, m, n, coun);
        coun = 1;
    }
    return 0;
}
