#include <stdio.h>
#include <time.h>

extern int fibN(int x);

int main(int argc, char **argv)
{
  time_t start_tm, finish_tm; 
  time(&start_tm); 
  int number=0;
  int result=0;

  scanf("%d",&number);
  result = fibN(number);   
  printf("The fibonacci sequence at %d is: %d\n", number, result);
  time(&finish_tm); 
  double elapsed_tm=difftime(finish_tm,start_tm); 
  printf("Recursive for %10.10f seconds.\n", elapsed_tm);
}

fibN(int x){
if(x<=0)return 0;
if(x==1)return 1;
return fibN(x-1)+fibN(x-2);
}
