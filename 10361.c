#include <stdio.h>
#include <string.h>
char str1[1000],str2[1000];
int main(){
    int m,p[4],len1,len2,i,j=0;
    scanf("%d", &m);
    getchar();
    while(m--){
        memset(p, 0, sizeof(p));
        gets(str1);
        gets(str2);
        len1 = strlen(str1);
        len2 = strlen(str2);
        str2[len2 - 3] = '\0';
        for(i=0; i<len1; i++){
            if(str1[i] != '<' && str1[i] != '>')printf("%c", str1[i]);
            if(str1[i] == '<')p[j++] = i;
            if(str1[i] == '>')p[j++] = i;
        }
        printf("\n%s", str2);
        for(i=p[2]+1; i<p[3]; i++)printf("%c", str1[i]);
        for(i=p[1]+1; i<p[2]; i++)printf("%c", str1[i]);
        for(i=p[0]+1; i<p[1]; i++)printf("%c", str1[i]);
        for(i=p[3]+1; i<len1; i++)printf("%c", str1[i]);
        j = 0;
        printf("\n");
    }
    return 0;
}
