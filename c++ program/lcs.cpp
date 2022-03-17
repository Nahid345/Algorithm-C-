#include<iostream>
using namespace std;
char x[1005],y[1005];
int dp[1005][1005];
int main(){
	int n,m;
	scanf("%s %s",x,y);
	n=Strlen(x);
	m=Strlen(y);
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(x[i]==y[j]){
				dp[i][j]=dp[i-1][j-1]+1;
			
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}
	}
	printf("LCS for %s %s = %d\n",x,y,dp[n][m]);
	return 0;
}
