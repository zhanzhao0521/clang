//
// Created by zhanzhao on 2021/2/20.
//

#include <stdio.h>
#define MSG "I am a symbolic string constant."

#define MAXLENGTH 81

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * ptl = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(ptl);
    words[8] = 'p';
    puts(words);
    return 0;
}