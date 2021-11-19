#include<stdio.h>

int main()
{
      int i,a,s;
      printf("entrer le nombre :");
      scanf("%d",&a);
      
      
      while(a!=0)
      {
                 s=a%10;
                 a=a/10;
                 printf("%d",s);

      }
      
}
