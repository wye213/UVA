#include <stdio.h>
#include <string.h>
int main(){
    char str[10000];
    int sum=0,i,flag=0;
    while(gets(str) != NULL){
        for(i=0; str[i]; i++){
            if((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))flag = 1;
            else {
                sum += flag;
                flag = 0;
            }
        }
        printf("%d\n", sum + flag);
        sum = 0;flag = 0;
    }
    return 0;
}
