#include<stdio.h>
int main(){
   int n,i;
   int fact,r;
   printf("\nEnter a number : ");
   scanf("%d",&n);
   printf("\n");
   int sum = 0;
   int temp = n;
   while(n){
      i = 1,fact = 1;
      r = n % 10;
      while(i <= r){
         fact = fact * i;
         i++;
      }
      sum = sum + fact;
      n = n / 10;
   }
   if(sum == temp)
      printf("%d is a strong number\n",temp);
   else
      printf("%d is not a strong number\n",temp);
   return 0;
}
