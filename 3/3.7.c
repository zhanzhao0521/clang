//
// Created by zhanzhao on 2021/1/25.
//

#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("%f can be written %e\n",aboat,aboat);
    printf("And it's %a in hexadecimal,powers of 2 notation\n",aboat);
    printf("%f can be written %e\n",abet,abet);
    printf("%Lf can be written %Le\n",dip,dip);

    float toobig = 3.4E38 * 100.0f;
    printf("%e\n",toobig);
    return 0;
}