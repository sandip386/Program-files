#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,c=1;
	printf("the size is= ");
	scanf("%d",&n);
	int r=pow(2,n);
	int a[r][n];
	for(i=0;i<r;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d]= ",i+1,j+1);
			scanf("%d",&a[i][j]);
			if(a[i][j]!=0&&a[i][j]!=1){  //only allows 1 and 0//
				printf("oly 1 and o\n");
				j--;
			}
		}
	}
	printf("The AND truth value is\n");
	for(i=0;i<r;i++){
		c=1;
		for(j=0;j<n;j++){
			c=c*a[i][j];
			printf("%d\t",a[i][j]);
		}
			printf("%d\t",c);
			printf("\n");
			
		}
	}
