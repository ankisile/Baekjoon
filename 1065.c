#include <stdio.h>

int hansu(int n);

int main(){
    int n, count;
    scanf("%d",&n);
    count=hansu(n);
    printf("%d\n", count);
}

int hansu(int n){
    int num[3], count=0, quot;
    if(n>=100){
        for(int i=100;i<=n;i++){
        	if(i==1000)
				break;
            quot=i;           
            for(int j=0;j<3;j++){
                num[j]=quot%10;
                quot=quot/10;
            }
            if(num[2]-num[1]==num[1]-num[0])
            	count++;
        }
        return 99+count;
    }
    else return n;
}
