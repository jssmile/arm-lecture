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

int fibN(int x){
int pre=-1;
int now=1;
int result=0;
int i=0;
for(i=0;i<=x;i++){
result=pre+now;
pre=now;
now=result;
}
return now;
}
