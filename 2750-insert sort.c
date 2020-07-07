#include <stdio.h>

int main(){
    int n, arr[1000], i, j, temp;
    scanf("%d", &n);
    for(i=0;i<n;i++){
    	scanf("%d", &arr[i]);
    }
    
    for(i=1;i<n;i++){
    	temp = arr[i];
    	for(j=i-1;j>=0&&temp<arr[j];j--){
    		arr[j+1]=arr[j];
    	}
    	arr[j+1]=temp;
    }
    for(i=0;i<n;i++){
    	printf("%d\n", arr[i]);
    }

    
}
