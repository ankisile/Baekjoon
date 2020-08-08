#include <stdio.h>

void hanoi(int n, int a, int b);
void h_count(int n, int a, int b);

int count;
int main(){
    int n;
    scanf("%d", &n);    
    h_count(n,1,3);
    printf("%d\n", count);
    hanoi(n,1,3);
}

void h_count(int n, int a, int b){
    int c = 6-a-b;
    count++;
    if(n==1){
        ;
    }
    else{
        h_count(n-1, a, c);
        h_count(n-1, c, b);
    }
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
