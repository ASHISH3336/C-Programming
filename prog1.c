#include<stdio.h>

void printhello(int n){
  int x = 50;
  printf("Hello world\n");
  if(x > n) {
   printhello(n);
  }
}

void main()
{  
  int n;
  printf("enter a number : ");
  scanf("%d" , &n);
  printhello(n);
  
}