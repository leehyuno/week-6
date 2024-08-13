#include <cstdio>
int main(){
	
	int n;
	scanf("%d",&n);
	
	int arr[101];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int find,cnt=0;
	scanf("%d",&find);
	for(int i=0;i<n;i++){
		if(arr[i] == find){
			cnt++;
		}
	}
	printf("%d",cnt);
}
