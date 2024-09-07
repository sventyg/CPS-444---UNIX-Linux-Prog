#include <stdlib.h>

char * search (char * str, char find){

if (str==NULL)return NULL;
while(*str)
if (*str==find)return str;
else ++str;
if (*str==find) return str;
return NULL;
}

int main(int argument, char**arg){
char*strs[]={"test1","test2","test3","test4"};
int size=4;
int null=0;
int i=0;
char * str;
char ptr; 
for (i=0;i<size;i++)
{
str=strs[i];
printf("Test: %s\n",str);
for (ptr=0;ptr<127;++ptr)
if (search(str,ptr)!=strchr(str,ptr)){
null=1;
}
}
if (null)
printf("NULL\n");
else
printf("Success\n");
}