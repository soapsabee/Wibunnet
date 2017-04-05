#include <stdio.h>
//#include <string.h>
char betgrade(int calgrade);
int main()
{
   
   int score;
   char grade;
   printf("\n Enter Your score : ");
   scanf("%d",&score);
   grade = betgrade(score);
   printf("Grade :[%c] \n",grade);
   //betgrade(score);
   return 0;

}
 char betgrade(int calgrade)

{ char grade; 

  if(calgrade >=90)
{
   grade = 'A';
}
  else if (calgrade >= 80 && calgrade <=89)
 {
   grade = 'B';

 }
  else if (calgrade >=60 && calgrade <=79)
  {
   grade = 'C';
  }
  else if (calgrade >=50 && calgrade <=59)
 { 
   grade = 'D';
 }
   else
 {
   grade = 'E';
 } 
      return grade;
}

