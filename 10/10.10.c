//
// Created by zhanzhao on 2021/2/18.
//

#include <stdio.h>
#define SIZE 10

int sum(int ar[],int n);

int main(void)
{
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;
    answer = sum(marbles,SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n",
           sizeof marbles);
}