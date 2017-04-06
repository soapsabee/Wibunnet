#include<stdio.h>
#include<string.h>
struct customer {
                   char id[6];
                   char name[21];
                   int salary;
                   int netsale;
                };
struct customer info;
int numofinfo=3;
FILE *fptr;
void getinfo(void);

int main()
{
   fptr = fopen("customer.dat","wb");
    if (fptr==NULL)
  { 
       printf("\nError open file");
       return 1;
  }
   getinfo();
   fclose(fptr);
   return 0;
}

void getinfo(void)
{  
   
    int i;
    for(i=0;i<numofinfo;i++)
    { 
      printf("\nInput ID:  ");
      fgets(info.id, 6, stdin);
      rewind(stdin);
      getchar();
      printf("\nInput Name:  ");
      fgets(info.name, 21, stdin);
      rewind(stdin);
      printf("\nInput Salary: ");
      scanf("%d",&info.salary);
      printf("\nInput Netsale: ");
      scanf("%d",&info.netsale);
      getchar();
     fwrite(&info,sizeof(struct customer),1,fptr);
   }
}
