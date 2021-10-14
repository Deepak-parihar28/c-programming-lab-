#include<stdio.h>
#include<math.h>
int main ()
{
float sideone,sidetwo,sidethree,area,s;
scanf("%f%f%f",&sideone,&sidetwo,&sidethree );
s=(sideone+sidetwo+sidethree)/2;
area=sqrt(s*(s-sideone)*(s-sidetwo)*(s-sidethree));
printf("%f" ,area);
return 0;
}
