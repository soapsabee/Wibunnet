#include <stdio.h>
#include <string.h>
struct customer {  
                  char id[6];
                  char name[21];
                  int salary;
                  int netsale;
                };
struct customer info;
FILE *fptr;
void readinfo (void);
int main()
{
  fptr = fopen ("customer.dat","rb");
  if (fopen==NULL)
  {
     printf("\nError Open file");
     return 1;
  }
 readinfo();
 fclose(fptr);
 return 0;
}
void readinfo(void)
{
 char *token1;
 char *token2;
  //token1 = strtok(info.id, "\n");
  //token2 = strtok(info.name, "\n");
   rewind(fptr);
   printf("\nID     Name             Salary    Netsale\n");
     do
      {  
         fread(&info,sizeof(struct customer),1,fptr);
         token1 = strtok(info.id, "\n");
         token2 = strtok(info.name, "\n");
         if (feof(fptr))  break;
         printf("%-7s%-10s%10d%15d \n",token1,token2,info.salary,info.netsale);
      } while (!feof(fptr));
        printf("\n\n");
}
