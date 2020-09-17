#include<stdio.h>
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"


int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int main()
{
    int a,b;
    printf("Enter the numerands\n");
    scanf("%d %d",&a,&b);
    printf("Following are the otions for calc\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division");
    int res,ch;
    switch (ch)
    {
      case 1:
              res = add(a,b);
              printf("%d", res);
             break;
      case 2:
              res = sub(a,b);
              printf("%d", res);
              break;
      case 3:
              res = mul(a,b);
              printf("%d", res);
              break;
      case 4:
              res = div(a,b);
              printf("%d", res);
              break;
    }
    return 0;
}