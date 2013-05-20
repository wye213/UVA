#include <stdio.h>

int main(){
    char str[4][5];
    int m,i,j,sum1=0,sum2=0;
    scanf("%d", &m);
    while(m--){
        for(i=0; i<4; i++)scanf("%s", str[i]);
        for(i=0; i<4; i++){
            for(j=0; j<4; j=j+2){
                int s = 2 *(str[i][j] - '0');
                if(s <= 9)sum2 += s;
                else {
                    while(s){
                        sum2 += s % 10;
                        s /= 10;
                    }
                }
            }
            for(j=1; j<4; j+=2)sum1 += (str[i][j] - '0');
        }
        sum1 += sum2;
        if(sum1%10 == 0)printf("Valid\n");
        else printf("Invalid\n");
        sum1=sum2=0;
    }
    return 0;
}
