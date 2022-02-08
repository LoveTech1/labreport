// wap to determine the character

#include<stdio.h>  
  
int main()  
{  
    char ch;  
  
    printf("Enter a Character\n");  
    scanf("%c", &ch);
    (ch>=65&&ch<=90) ? 
    printf("Character Enter is a Capital Letter \n"):
    (ch>=97&&ch<=122) ?
    printf("Character Enter is a Small Letter \n"):
    (ch>=48&&ch<=57) ?
    printf("Character Enter is a number between 0-9 \n"):
  
    ( (ch >= 0  && ch <= 47) ||  
      (ch >= 58 && ch <= 64) ||  
      (ch >= 91 && ch <= 96) ||  
      (ch >= 123 && ch <=127) ) ?  
      printf("Character Entered Is a Special Symbol\n") :  
      printf("Character Entered Is not a Special Symbol\n");  
  
    return 0;  
}  