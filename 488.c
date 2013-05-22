#include <stdio.h>
int main(){
    int m,x,y,i,j,k;
    scanf("%d", &m);
    while(m--){
        scanf("%d %d", &x, &y);
        for(i=0; i<y; i++){
            for(j=1; j<=x; j++){
                for(k=0; k<j; k++)printf("%d", j);
                printf("\n");
            }
            for(j=x-1; j>0; j--){
                for(k=0; k<j; k++)printf("%d", j);
                printf("\n");
            }
            if(i != y-1)printf("\n");
        }
        if(m)printf("\n");
    }
    return 0;
}
