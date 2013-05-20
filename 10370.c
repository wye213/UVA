#include<stdio.h>

int main(){
    int m,n,i,coun=0;
    double sum=0,aver,p[1005];
    scanf("%d", &m);
    while(m--){
        scanf("%d", &n);
        for(i=0; i<n; i++){
            scanf("%lf", &p[i]);
            sum += p[i];
        }
        aver = sum / n;
        for(i=0; i<n; i++){
            if(p[i] > aver)coun++;
        }
        printf("%.3lf%%\n", 100.0*coun/n);
        coun=0;
        sum=0;
    }
    return 0;
}
