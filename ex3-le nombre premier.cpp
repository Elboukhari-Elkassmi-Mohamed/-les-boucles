#include<stdio.h>

int main(){
	
	int n,i,d;
	
	printf ("donner la nombre entier :");
	scanf ("%d",&n);
	i=1;
	d=0;
	while (i<=n)
	{	
		if(n%i==0)
		{
		d=d+1;
		}
		i++;	
	}
	if(d==2)
		{
		 printf ("le nombre et premier %d",n);	
		}
	     else printf("le nombre pas premier%d ",n);
	     
	     return(0);
		
	
		
}

