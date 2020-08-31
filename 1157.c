#include <stdio.h>
#include <string.h>

int main(){
    int s[91]={0}, max=0, chr=0;
    char str[1000001];
    
    scanf("%s", str);
    int len = strlen(str);
    for(int i=0;i<len;i++){
        str[i]=toupper(str[i]);
        s[str[i]]++;
    }
    
    for(int i=65;i<=90;i++){
        if(s[i]){
            if(s[i]>max){
            	max=s[i];
                chr=i;
            }
            else if(s[i]==max){
                chr = 63;
            }                
        }
    }
    printf("%c", chr);
}
