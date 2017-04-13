#include <stdio.h>
int calmax(int sendmax[5]);
int calmin(int sendmin[5]);
int main()
{   int resultmax;
    int resultmin;
    int value[5];
  for(int i=0;i<5;i++)
   {
   printf("Input Value :  ");
    scanf("%d",&value[i]);

   }
  resultmax=calmax(value);
  resultmin=calmin(value);

   printf("Max is : %d\nMin is : %d ",resultmax,resultmin);
 }
int calmax(int sendmax[5])
 {
    int max = sendmax[1];
    for(int i=0;i<5;i++)
      if (sendmax[i]>max)
        max = sendmax[i];
     return (max);
  }
int calmin(int sendmin[5])
 {
    int min = sendmin[0];
    for(int i=0;i<5;i++)
      if(sendmin[i]<min)
        min = sendmin[i];
      return (min);
  }
