#include <stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	
	srand(time(NULL));
	
	int sum=0;

	int arr[10];
	for(int i=0;i<10;i++){
		arr[i]=rand()%9 + 1;
		printf("%d ");
	}
	for(int i=0;i<10;i++){
		sum+=arr[i];
	}
	printf("\n%d",sum);
}
	

