//
// Created by zhanzhao on 2021/4/15.
//

#include <stdio.h>
#define SQUARE(X) X*X
#define PR(X) printf("The result is %d.\n",X)
int main(void)
{
   int x = 5;
   int z;
   printf("x = %d\n",x);
   z = SQUARE(x);
   printf("Evaluation SQUARE(x):");
   PR(x);
   z = SQUARE(2);
   printf("Evaluation SQUARE(2):");
   PR(z);
   printf("Evaluation SQUARE(x+2):");
   PR(SQUARE(x+2));
   printf("Evaluation 100/SQUARE(2):");
   PR(100 / SQUARE(2));
   printf("x is %d.\n",x);
   printf("Evaluating SQUARE(++x):");
   PR(SQUARE(++x));
   printf("After incrementing,x is %x.\n",x);
   return 0;
}