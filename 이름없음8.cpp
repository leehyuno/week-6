#include <stdio.h>
int main(){
	
	int max=0;
	int n;
	
	int arr[10];
	for(int i=0;i<9;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<9;i++){
		if(arr[i]>max){
			max=arr[i];
			n=i+1;
			}
		
	}
	printf("%d %d",max,n);
}
