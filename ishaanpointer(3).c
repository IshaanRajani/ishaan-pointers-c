/*wap to calculate of two numbers using pointers
  name: ishaan rajani
  uin: 241P008
  roll no: 08*/

#include <stdio.h>
int main(){
int a;
int *ptr = &a;
printf("put the first number: ");
scanf("%d", ptr);

int b;
int *p = &b;
printf("put the second number: ");
scanf("%d", p);

int sum = *ptr + *p;
printf("the sum of two numbers is %d", sum);
return 0;

}

