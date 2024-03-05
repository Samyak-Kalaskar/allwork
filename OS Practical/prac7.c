// Online C compiler to run C program online
#include <stdio.h>

int main() {
  int buffer[10],in,out,produce,consume,choise=0;
  in=0,out=0;
  int count=0,n=5;
  while(choise !=3)
  {
      printf("\n1. produce \t2. consume \t3. Exit");
      printf("\nEnter Choise :=");
      scanf("%d",&choise);
      
      switch(choise)
      {
          case 1:if(count==n)
          printf("\nBuffer is Full");
          else
          {
              printf("\nEnter the value : ");
              scanf("%d",&produce);
              buffer[in]=produce;
              in=(in+1)%n;
              count=count+1;
          }
          break;
         
          case 2:if(count==0)
          printf("\nBuffer is empty");
          else
          {
              consume=buffer[out];
              printf("\nThe consumed value is %d",consume);
              out=(out+1)%n;
              count=count-1;
          }
          break;
      }
  }
}