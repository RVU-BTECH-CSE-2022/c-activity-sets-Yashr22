#include<stdio.h>
int sum(int num1,int num2);
int main(){
  int num,num2;
  printf("Enter the 1st and 2nd number:");
  scanf("%d%d",&num1,&num2);

  int result=sum(num1,num2);
}
int sum(int num1,int num2)
{
  int result=num1+num2;
  return result;
}
