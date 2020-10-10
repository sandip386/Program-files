#include<stdio.h>
#include<math.h>
int main(){
	int n,i,j,c=0;
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
	printf("The OR Truth table  is\n");
	for(i=0;i<r;i++){
		for(j=0;j<n;j++){
			c=c+a[i][j];
			printf("%d\t",a[i][j]);
		}
		if(c>1){
			c=1;
			printf("%d",c);
			printf("\n");
		}
		else{
			printf("%d\t",c);
			printf("\n");
			}
		}
	}
