#include <cstdio>
int main(){
	
	int m;
	scanf("%d",&m);
	
	for(int i=1;i<=m;i++){
		for(int j=m-i;j>=1;j--){
			printf(" ");
		}
		
		for(int j=1;j<=i;j++){
			printf("*");
		}
	printf("\n");
	}
	
}
