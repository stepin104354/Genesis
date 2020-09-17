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
    int res;
    switch (ch)
    {
      case '+':
              res = add(a,b);
              printf("%d", res);
             break;
      case '-':
              res = sub(a,b);
              printf("%d", res);
              break;
      case '*':
              res = mul(a,b);
              printf("%d", res);
              break;
      case '/': 
              res = div(a,b);
              printf("%d", res);
              break;
      default:
            printf("Error! operator is not correct");
    }
    return 0;
}