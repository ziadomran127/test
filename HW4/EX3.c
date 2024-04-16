#include<stdio.h>
#include<stdlib.h>
#include<strings.h>
int main()
{
  char s[100] ;
  printf("Enter a sentence : ");
  fgets(s,sizeof(s),stdin) ;
  
  int length = strlen(s) ;

  for(int i=length-2 ; i>=0 ; i--)
  {
    printf("%c" , s[i]);
  }
  
}