#include <stdio.h>

int contains(char chr, char *str){
int i;
for(i = 0; str[i] != '\0'; i++){
if(str[i] == chr){
return 1;}
}
return 0;
}

int main(){
    
char str[6] = "wabbawabba";
printf("Found: %d\n",contains('w',str) );
printf("Found: %d\n",contains('t',str) );
return 0;
}