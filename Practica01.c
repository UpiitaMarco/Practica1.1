#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
int x,y,a,b,r;
printf("Ingrese el valor para x:");
scanf("%d",&x);
printf("Ingrese el valor para y:");
scanf("%d",&y);
printf("Ingrese el valor para a:");
scanf("%d",&a);
printf("Ingrese el valor para b:");
scanf("%d",&b);
r=((x+y)*(x+y))*(a-b);
printf("El resultado es %d\n",r);
system("PAUSE");	
return 0;
}