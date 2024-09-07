#include <stdio.h>

char * mystrncpy(char *s1, char *s2, int n);
char * get(char *str, int n);
void clear(char * str, int n);

int size = 50;

int main(void)
{
  char s1[size];
  char s2[size];
  int n;

  printf("Enter string: ");
  get(s2, size);
  while (s2[0] != '\0'){
    printf("Copy how many: ");
    scanf("%d", &n);
    while (getchar() != '\n')
      continue;
    if (n > size){
      n = size;
    }
    printf("Original: %s\n", s2);
    mystrncpy(s1, s2, n);
    printf("Copy: %s\n", s1);
    clear(s1, size);
    printf("Enter new string: ");
    get(s2, size);
  }
  return 0;
}
char * mystrncpy(char *s1, char *s2, int n){
  int i = 0;
  while (s2[i] != '\0' && i < n){
    s1[i] = s2[i];
    i++;
  }
  while (i < n){
    s1[i] = '\0';
    i++;
  }
  return s1;
}
char * get(char *str, int n){
  char *return_value = fgets(str, n, stdin);

  while (*str != '\0'){
    if (*str == '\n'){
      *str = '\0';
      break;
    }
    str++;
  }
  return return_value;
}
void clear(char *str, int n){
  for (int i = 0; i < n; i++)
    str[i] = '\0';
}