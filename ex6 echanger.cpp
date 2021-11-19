#include<stdio.h>

void echanger ( int a, int b){
	
printf ("donner la nombre :");
scanf ("%d", &a);

printf ("donner la nombre :");
scanf  ("%d",&b);
printf("les nbr est %d %d :",a,b);
int c=a;
    a=b;
    b=c;
    printf ("les nbr est %d %d:",a,b);
}


int main(){
	int a,b;
	
	echanger(a,b);
}
