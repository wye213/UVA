#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *rever = "A   3  HIL JM O   2TUVWXY 1SE Z  8 ";
int is_pal(char *str){
    int i;
    int len = strlen(str);
    for(i=0; i<len; i++)
        if(str[i] != str[len - i -1])return 0;
    return 1;
}

int is_mir(char *str){
    int i;
    int len = strlen(str);
    for(i=0; i<len; i++){
        if(isalpha(str[i]) && str[len - i - 1] != rever[str[i] - 'A'])return 0;
        else if(isdigit(str[i]) && str[len - i - 1] != rever[str[i] - '1' + 26])return 0;
    }
    return 1;
}

int main(){
    char str[1024];
    int pal,mir;
    while(scanf("%s", str) != EOF){
        pal = is_pal(str);
        mir = is_mir(str);
        if(pal && mir)printf( "%s -- is a mirrored palindrome.\n\n", str);
        if(pal && !mir)printf( "%s -- is a regular palindrome.\n\n", str);
        if(!pal && mir)printf( "%s -- is a mirrored string.\n\n", str);
        if(!pal && !mir)printf( "%s -- is not a palindrome.\n\n", str);
    }
    return 0;
}
