#include<stdio.h>
#include<stdbool.h>

bool isPremier (int n){
	
	bool is_Premier = false;
	int i=1;
	int d=0;
     
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
		is_Premier = true;
		}
   return is_Premier;
}

int main(){
	int n;
	printf ("donner le nombre :");
	scanf ("%d",&n);
	
	//printf ("%s",isPremier(n) ? "true" : "fals");
	
	if(isPremier(n) == true)
	{
		printf("le nombre %d est premier.", n);
	}
	else
	{
		printf("le nombre %d n'est pas premier.", n);
	}
}
