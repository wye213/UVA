#include <stdio.h>
#include <string.h>

char str[110];
int sum[110], s[110];

int main(){
    int i,len,temp,ans=0;
    memset(sum, 0, sizeof(sum));
    while(scanf("%s", str) != EOF && str[0] != '0'){
        len = strlen(str);
        memset(s, 0, sizeof(s));
        for(i=0; i<len; i++){
            s[i] = str[len - i - 1] - '0';
        }
        for(i=0; i<110; i++){
            temp = sum[i] + s[i] + ans;
            sum[i] = temp % 10;
            ans = temp / 10;
        }
    }
    len = 109;
    while(len >= 1 && !sum[len])len--;
    for(i=len; i>=0; i--){
        printf("%d", sum[i]);
    }
    printf("\n");
    return 0;
}
