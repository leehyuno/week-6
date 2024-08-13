#include <stdio.h>
int main(){
	
	int n;
	int A=0,B=0,D=0;
	
	int arr[10];
	for(int i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	int brr[10];
	for(int i=0;i<10;i++){
		scanf("%d",&brr[i]);
	}
	for(int i=0;i<10;i++){
		if(arr[i]>brr[i]){
			A++;
		}
		else if(arr[i]<brr[i]){
			B++;
		}
		else if(arr[i]==brr[i]){
			D++;
		}
	}
	if(A>B){
		printf("A");
	}
	else if(A<B){
		printf("B");
	}
	else if(A==B){
		printf("D");
	}
			 
			
	}


