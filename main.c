#include<stdio.h>
#include<string.h>

main(int arg,char* v[]){
    FILE* f;
    int w=0, l=0, c=0, s=1;
    char chr;
    if(arg<2){
        printf("COMMAND ERROR");
        return;
    }
    if(arg>3){
        printf("COMMAND ERROR");
        return;
    }
    if(arg==3){
        f = fopen(v[2], "r");

        if(f==NULL){
            printf("Error opening file");
            return;
        }
    }
    else{
        f=fopen(v[1],"r");
        if(f==NULL){
            printf("Error opening file");
            return;
        }
    }
    chr=fgetc(f);

    while(!feof(f)){
        if(chr==' '){
            s=1;
        }
        else
        if(chr=='n'){
            l++;
            s=1;
        }
        else{
            if(s==1)
                w++;
                s=0;
            }
        c++;
        chr=fgetc(f);
    }

    if(arg==3){
        if(!strcmp(v[1], "-w"))
            printf("%3d", w);
        else if(!strcmp(v[1], "-l"))
            printf("%3d", l);
        else if(!strcmp(v[1], "-c"))
            printf("%3d", c);
            printf(" %sn", v[2]);
    }
    else{
        printf("%3d", l);
        printf("%3d", w);
        printf("%3d", c);
        printf(" %sn", v[1]);
    }
    fclose(f);
}