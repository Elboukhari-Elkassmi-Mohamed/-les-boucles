#include<stdio.h> 

int add (int a , int b)
{
int s=a+b;
return s;

}
int main(){
	int a,b;
	
	printf ("la nombre A :");
	scanf ("%d",&a);
	
	printf ("la nombre B :");
	scanf ("%d",&b);
	
	printf ("la somme est %d:",add(a,b));
}
                                                                                                                                   
