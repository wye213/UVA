#include <stdio.h>
#include <string.h>

char str1[260], str2[260];
int sum[550];

int main(){
    int temp,len1,len2,i,j;
    while(scanf("%s%s", str1, str2) != EOF){
        memset(sum, 0, sizeof(sum));
        len1 = strlen(str1);
        len2 = strlen(str2);
        for(i=len1-1; i>=0; i--){
            for(j=len2-1; j>=0; j--){
                temp =len1 + len2 -2 - i - j;
                sum[temp] += (str1[i] - '0') * (str2[j] - '0');
            }
        }
        for(i=0; i<550; i++){
            sum[i+1] += sum[i] / 10;
            sum[i] %= 10;
        }
        temp = 509;
        while(temp >=0 && !sum[temp])temp--;
        for(i=temp; i>=0; i--)printf("%d", sum[i]);
        if(temp == -1)printf("0");
        printf("\n");
    }
    return 0;
}
