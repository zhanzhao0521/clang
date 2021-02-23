//
// Created by zhanzhao on 2021/2/19.
//

#include <stdio.h>
#define ROWS 3
#define COLS 4

void sum_rows(int arr[][COLS],int rows);
void sum_cols(int [][COLS],int );
int sum2d(int(* ar)[COLS],int rows);


int main(void)
{
    typedef int arr4[4]; // arr4是一个内含 4 个int的数组
    typedef arr4 arr3x4[3];  // arr3x4 是一个内含3个 arr4的数组
    int sum2(arr3x4 ar, int rows); // 与下面的声明相同
    int sum2(int ar[3][4], int rows);  // 与下面的声明相同
    int sum2(int ar[][4], int rows); // 标准形式


    int junk[ROWS][COLS] = {
        { 2, 4, 6, 8 },
        { 3, 5, 7, 9 },
        { 12, 10, 8, 6 }
    };
    sum_rows(junk,ROWS);
    sum_cols(junk,ROWS);
    printf("Sum of all elements = %d\n", sum2d(junk, ROWS));
    return 0;
}
void sum_rows(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot;
    for (r = 0; r < rows; r++)
    {
        tot = 0;
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
        printf("row %d: sum = %d\n", r, tot);
    }

}

void sum_cols(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot;
    for (c = 0; c < COLS; c++)
    {
        tot = 0;
        for (r = 0; r < rows; r++)
            tot += ar[r][c];
        printf("col %d: sum = %d\n", c, tot);
    }

}
int sum2d(int ar[][COLS], int rows)
{
    int r;
    int c;
    int tot = 0;
    for (r = 0; r < rows; r++)
        for (c = 0; c < COLS; c++)
            tot += ar[r][c];
    return tot;
}