#include <stdio.h>

int main(){
    int n, arr[1000], flag=0, temp;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
    	scanf("%d", &arr[i]);
    }
    
    for(int i=n-1;flag==0;i--){
    	flag=1;
    	for(int j=0;j<i;j++)
    		if(arr[j]>arr[j+1]){
    			temp = arr[j];
    			arr[j]=arr[j+1];
    			arr[j+1]=temp;
    			flag = 0;
    		}
    }
    for(int i=0;i<n;i++){
    	printf("%d\n", arr[i]);
    }

    
}
