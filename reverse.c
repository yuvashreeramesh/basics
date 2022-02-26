#include <stdio.h>

int main()
{
    int n,i,r=0,size;
    printf("enter the number:\n");
    scanf("%d",&n);
    printf("enter the digits of number:\n");
    scanf("%d",&size);
    for(i=1;i<=size;i++){
      r=n%10;
      n=n/10;
     printf("%d",r);
    }
}
