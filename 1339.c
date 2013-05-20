#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int main(){
    char str1[110],str2[110];
    int i,len1,len2,cha1[26],cha2[26];
    while(scanf("%s", str1) != EOF){
        scanf("%s", str2);
        memset(cha1, 0, sizeof(cha1));
        memset(cha2, 0, sizeof(cha2));
        len1 = strlen(str1);
        len2 = strlen(str2);
        if(len1 != len2){
            printf("NO\n");
            continue;
        }
        for(i=0; i<len1; i++){
            cha1[str1[i] - 'A']++;
            cha2[str2[i] - 'A']++;
        }
        qsort(cha1, 26, sizeof(cha1[0]), cmp);
        qsort(cha2, 26, sizeof(cha2[0]), cmp);
        if(!memcmp(cha1, cha2, sizeof(cha1)))printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}
