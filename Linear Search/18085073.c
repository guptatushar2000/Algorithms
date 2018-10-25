#include<stdio.h>
void main()
{
  int k=4,i=0;
  int l[]={2,3,4,5,6,8};
  while(i>=0)
  {
    if((l[i]==k)&&(i<6))
      {
        printf("K is in the array.");
        i=-1;
      }
    else
      i++;
   }
 }
