//
// Created by 韩战召 on 2022/10/29.
//

//长度为7的字符串，首尾保持不变，中间字符按ASII码升序排列，
//然后输出。举例如”Bdsaclid",排序后输出“Bacdlisd"。

#include <iostream>
using namespace std;
int fun(char *s, int num)
{
    int i,j;
    char t;
    for(i=1;i<num-1;i++)
        for(j=1;j<num-1-i;j++)
            if(s[j]>s[j+1])
            {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
    return 0;
}
int main()
{
    char s[10];
    cout<<"输入 7 个字符的字符串:"<<endl;
    cin>>s;
    fun(s,7);
    cout<<s;
}