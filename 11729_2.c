#include <stdio.h>
#include <math.h>

void hanoi(int n, int a, int b);

int main(){
    int n;
    scanf("%d", &n);
    int count = pow(2,n)-1;
    printf("%d\n", count);
    hanoi(n,1,3);
}


void hanoi(int n, int a, int b){
    int c = 6-a-b;
    if(n==1){
        printf("%d %d\n", a, b);
    }
    else{
        hanoi(n-1, a, c);
        printf("%d %d\n", a,b);
        hanoi(n-1, c, b);
    }
}
