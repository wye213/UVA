#include <stdio.h>
#include <string.h>

char s[100005],t[100005];
int main(){
    int len1,len2,i,j=0;
    while(scanf("%s%s", s, t) != EOF){
        len1 = strlen(s);
        len2 = strlen(t);
        for(i=0; i<len2&&j<len2; i++){
            if(s[j] == t[i])j++;
        }
        if(j == len1)printf("Yes\n");
        else printf("No\n");
        j=0;
    }
    return 0;
}
