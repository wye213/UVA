#include <stdio.h>
#include <string.h>

char maps[110][110];
int num[110][110];
int dxdy[8][2] = {1,0,0,1,-1,0,0,-1,1,-1,-1,1,1,1,-1,-1};

int main(){
    int n,m,i,j,k,x,y,coun=1;
    while(scanf("%d %d", &n, &m) != EOF && (n&&m)){
        for(i=0; i<n; i++)scanf("%s", maps[i]);
        memset(num, 0, sizeof(num));
        for(i=0; i<n; i++){
            for(j=0; j<m; j++){
                if(maps[i][j] == '*'){
                    for(k=0; k<8; k++){
                        x = i + dxdy[k][0];
                        y = j + dxdy[k][1];
                        if(x >= 0&&x < n&&y >= 0&&y <m)num[x][y]++;
                    }
                }

            }
        }
        if(coun > 1)printf("\n");
        printf("Field #%d:\n",coun++);
        for(i=0; i<n; i++) {
            for(j=0; j<m; j++)
                if(maps[i][j] == '*')  printf("*");
                else printf("%d",num[i][j]);
            printf("\n");
        }
    }
    return 0;
}
