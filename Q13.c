#include <stdio.h>

char * getn (char * str, int n);

int main(){   
int n;
printf("Enter n: ");
scanf("%d", &n);
char array[n+1];
  
char *ptr;
printf("Enter String: ");
ptr = getn(array, n);
  
//if pointer is null
if (ptr == NULL)
puts("fail");
else
puts(array);
return 0;
}

char * getn(char * str, int n){
int i;
int z;

for (i = 0; i < n; i++){
z = getchar();
if (z != EOF)
str[i] = z;
else
break;
}
if (z == EOF)
return NULL;
else
{
str[i] = '\0';
return str;   
}
}