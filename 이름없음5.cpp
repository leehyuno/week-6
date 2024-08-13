#include <stdio.h>
int main(){
	
	int n,m;
	scanf("%d %d",&n,&m);
	
	int arr[10000];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[i]<m){
			printf("%d ",arr[i]);
		}
	}
}
