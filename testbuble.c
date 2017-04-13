#include <stdio.h>
int main()
{
    int bub[5];
    int temp=0;
    int n=5;
   for(int i=0;i<5;i++)
   {
    printf("Input number[%d]: ",i);
     scanf("%d",&bub[i]); 
   }
      do{
         for(int p=0;p<n;p++)
          {
             if(bub[p]>bub[p+1])
            {
              temp=bub[p];
              bub[p]=bub[p+1];
              bub[p+1]=temp;
            }
  
             
           }
           n=n-1;
         }while(n!=0);

       printf("----Min to Max ---");
    for(int j = 0;j<5;j++)
      { 
        printf("\n %d ",bub[j]);
      }
}
