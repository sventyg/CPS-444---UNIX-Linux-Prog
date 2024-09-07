#include<stdio.h>

int main(){
  
    int i;
    int n;
    char* mon[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int day[] = {31,28,31,30,31,30,31,31,30,31,30,31};
 
    int before[12];
    before[0]=0;
    for(i=1;i<12;i++){
        before[i] = before[i-1] + day[i-1];
    }
  
    printf("Enter day of the year: ");
    scanf("%d", &n);
  
    i=0;
    while(n>before[i]) i++;
  
    printf("%s %d\n", mon[i-1], n-before[i-1]);
    return 0;
}

