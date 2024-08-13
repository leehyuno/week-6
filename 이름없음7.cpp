#include <stdio.h>
int main(){
	
	
	int max=0;
	int min=1000000000;
	
	int n;
	scanf("%d",&n);
	
	int arr[10000];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			}
		if(arr[i]<min){
			min=arr[i];
			}

	}
	printf("%d %d",max,min);
}
