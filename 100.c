#include <stdio.h>

int main(){
    long m,n,i,maxm=1,sum=1,s;
    while(scanf("%ld %ld", &m, &n) != EOF){
        maxm = 1;
        for(i=(m > n?n:m); i<=(m>n?m:n); i++){
            s=i;
            while(s != 1){
                if(s % 2 == 0)s = s / 2;
                else s = 3*s+1;
                sum++;
            }
            if(maxm < sum)maxm = sum;
            sum = 1;
        }
        printf("%ld %ld %ld\n", m, n, maxm);
    }
    return 0;
}
