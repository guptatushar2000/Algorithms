#include<stdio.h>
void pal(int);
void main()
{
  int n;
  printf("Enter the number");
  scanf("%d",&n);
  pal(n);
}
void pal(int n)
{
  int r, ncopy=n,p=0;
  while(n>0)
  {
    r=n%10;
    n=n/10;
    p=p*10+r;
  }
  if(ncopy==p)
   printf("Number is palindrome");
  else
   printf("Number is not a palindrome");
 }
    
