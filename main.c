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
    int op;
    printf("Enter the numerands\n");
    scanf("%d %d",&a,&b);
    printf("Enter the option for calc\n");
    printf("Enter an operator (1, 2, 3, 4): ");
    scanf("%d", &op);
    int res;
    switch (op)
    {
      case 1:
        {      
                res = add(a,b);
                printf("%d", res);
                break;
        }
        case 2:
        {
                res = sub(a,b);
              printf("%d", res);
              break;
        }
        case 3:
        {
                      res = mul(a,b);
              printf("%d", res);
              break;
        }
        case 4:
        { 
              res = div(a,b);
              printf("%d", res);
              break;
        }
        default:
            printf("Error! operator is not correct");
    }
    return 0;
}