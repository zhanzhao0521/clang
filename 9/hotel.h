//
// Created by zhanzhao on 2021/2/17.
//

#ifndef CLION_HOTEL_H
#define CLION_HOTEL_H

#endif //CLION_HOTEL_H
#define QUIT 5
#define HOTEL1 180.00
#define HOTEL2 225.00
#define HOTEL3 255.00
#define HOTEL4 355.00
#define DISCOUNT 0.95
#define STARS "**********************************"

// 显示选择列表
int  menu(void);
// 返回预订天数
int  getnights(void);
// 根据费率、入住天数计算费用
// 并显示结果
void  showprice(double  rate,  int  nights);