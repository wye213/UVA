#include <stdio.h>
#include <string.h>

int main(){
    int m,len=0,coun[15],maxm=0,i,j,sum=0;
    char c;
    while(scanf("%d", &m) != EOF && m){
        memset(coun, 0, sizeof(coun));
        for(i=0; i<m; i++){
            c = getchar();
            len = 0;
            for(j=0; j<25; j++){
                if((c=getchar()) == 'X')++len;
            }
            coun[i] = len;
            if(maxm < coun[i])maxm = coun[i];
        }
        for(i=0; i<m; i++){
            sum += (maxm - coun[i]);
        }
        printf("%d\n", sum);
        sum = maxm = 0;
        c = getchar();
    }
    return 0;
}

