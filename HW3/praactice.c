#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void printhello (int count)
{
  printf("hello\n\r") ;
  count-- ;
  /*************************************************/
  if(count >0)
  printhello(count) ;
}

void main()
{
  printhello(3) ;
}