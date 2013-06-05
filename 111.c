#include <stdio.h>
#include <string.h>
#define MAX 100
#define max(a,b) (a) > (b) ? (a) : (b)


int ans,dp[MAX][MAX];
int n,arr[MAX],brr[MAX];


int main(){
  int i,j,k;


	scanf("%d",&n);
	for (i = 1; i <= n; ++i)
		scanf("%d",&k),arr[k] = i;


	while (scanf("%d",&k) != EOF) {

		ans = 0,brr[k] = 1;
		for (i = 2; i <= n; ++i)
			scanf("%d",&k),brr[k] = i;


		memset(dp,-1,sizeof(dp));
		for (i = 0; i <= n; ++i)
			dp[0][i] = dp[i][0] = 0;
		for (i = 1; i <= n; ++i)
			for (j = 1; j <= n; ++j) {

				if (arr[i] == brr[j])
					 dp[i][j] = max(dp[i][j],dp[i-1][j-1]+1);
				else dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
				ans = max(dp[i][j],ans);
			}


		printf("%d\n",ans);
	}
	return 0;
}
