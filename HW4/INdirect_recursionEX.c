#include<stdio.h>
#include<stdlib.h>
   
   int n =1 ;

void Odd();
void Even() ;

void Odd()
{
 if(n<=10)
 {
 printf("%d " , n+1) ;
 n++ ;
 Even() ;
 }

}

void Even()
{
if(n<=10)
 {
 printf("%d " , n-1) ;
 n++ ;
 Odd();
 }
}


int main()
{
    Odd() ;
}