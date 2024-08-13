#include <stdio.h>
int main(){
	
	int n;
	int max=0;
	int min=10000;
	int sum;
	scanf("%d",&n);
	
	int arr[100];
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
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	
	printf("%d",(sum-max-min)/(n-2));
}

	

		

