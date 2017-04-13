#include <stdio.h>
#include <string.h>
int main()
{
  char text[20];
  int cout = 0;
  int i=0;
  int str;
  printf("Input Text:  ");
  fgets(text, 20, stdin);
  str = strlen(text);
   while(i<=str)
  {
     if(text[i] == '.'||text[i] == '?')
        
         cout++; i++;
      
  }
   printf("cout = %d",cout);
   
}

  
