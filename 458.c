#include <stdio.h>
#include <string.h>
int main(){
    char str[1000];
    int i,len;
    while(scanf("%s", str) != EOF){
        len = strlen(str);
        for(i=0; i<len; i++)printf("%c", str[i] - 7);
        printf("\n");
    }
    return 0;
}
