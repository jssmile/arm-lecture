#include <stdio.h>

extern int fibN(int x);

int main(int argc, char **argv)
{
  int number=0;
  int result=0;

  scanf("%d",&number);
  result = fibN(number);   
  printf("The fibonacci sequence at %d is: %d\n", number, result);
}

fibN(int x){
if(x<=0)return 0;
if(x==1)return 1;
return fibN(x-1)+fibN(x-2);
}
