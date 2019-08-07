#include<stdio.h>
main()
{
int X,P;
float S;
scanf("%d %d",&X,&P);
  if(0 <=X<=10000&&1 <=P<= 100)
  {
S=X%P;
printf("%f",S);
  }
return 0;
}
