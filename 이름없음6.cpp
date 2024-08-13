#include <stdio.h>
int main(){
	
	int n;
	int max=0;
	int min=1000000000;
	scanf("%d",&n);
	
	int arr[1000000];
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
