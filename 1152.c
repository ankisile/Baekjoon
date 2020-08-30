#include <stdio.h>
#include <string.h>

int main(){
    char s[1000001];int num=0;
    gets(s);
    
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
            num++;
        }
    }
    
    if(s[0]==' ') num--;
    if(s[strlen(s)-1]==' ') num--;
    
    printf("%d", num+1);
}
