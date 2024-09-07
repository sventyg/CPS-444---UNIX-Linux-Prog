#include <stdio.h>
#define leng 10

int main(){
    int words;
    int tot = 0;
    int n;
    char *t[leng];
    char *read[leng];
    
    printf("How many words? ");
    scanf("%d",&words);
    printf("Enter %d words:\n", words);
    
    for(n=0; n<words; n++){
        t[n] = (char *)malloc(leng);
        scanf("%s", t[n]);
        tot += strlen(t[n]+1);
    }
    for(n = 0; n < words; n++){
        read[n]=(char *)malloc(tot+1);
        strcpy(read[n],t[n]);
        free(t[n]);
    }
    printf("Output of %d: \n",words);
    for(n = 0; n < words; n++){
        puts(read[n]);
        free(read[n]);
    }
}
